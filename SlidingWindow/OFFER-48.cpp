#include <iostream>
#include <unordered_map>


using namespace std;


/*
����ַ������ҳ�һ����Ĳ������ظ��ַ������ַ��������������ַ����ĳ��ȡ�

?

ʾ��?1:

����: "abcabcbb"
���: 3 
����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
ʾ�� 2:

����: "bbbbb"
���: 1
����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
ʾ�� 3:

����: "pwwkew"
���: 3
����: ��Ϊ���ظ��ַ�����Ӵ���?"wke"�������䳤��Ϊ 3��
?    ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke"?��һ�������У������Ӵ���

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/


int lengthOfLongestSubstring(string s) 
{
	int len = s.size();
	

	int left = 0;
	int right = 0;
	int ret_len = 0;
	unordered_map<char,int>st;
	for(left=0;left<len;left++)
	{
		if(left!=0)
		{
			char c = s[left - 1];
			if(st[c] == 1)
				st.erase(c);
			else
				st[c]--;
		}

		while(right < len)
		{
			char c = s[right];
			st[c]++;
			
			if(st[c] == 1)
			{
				right++;
			}
			else	//�ұ߽粻��ͷ�����������pop���ڣ��ƶ��󴰿�
			{
				st[c]--;
				break;
			}

		}
		ret_len = max(ret_len,right - left);
	}
	return ret_len;
}






int main()
{

 //string s = "ccaabbb" ;
 string s = "abcabcbb";

 cout << lengthOfLongestSubstring(s) << endl;




	return 0;
}
























































