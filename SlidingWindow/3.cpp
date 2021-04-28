#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>


using namespace std;


/*
����һ���ַ����������ҳ����в������ظ��ַ���?��Ӵ�?�ĳ��ȡ�

?

ʾ��?1:

����: s = "abcabcbb"
���: 3 
����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
ʾ�� 2:

����: s = "bbbbb"
���: 1
����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
ʾ�� 3:

����: s = "pwwkew"
���: 3
����: ��Ϊ���ظ��ַ�����Ӵ���?"wke"�������䳤��Ϊ 3��
?    ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke"?��һ�������У������Ӵ���
ʾ�� 4:

����: s = ""
���: 0
?

��ʾ��

0 <= s.length <= 5 * 104
s?��Ӣ����ĸ�����֡����źͿո����

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/longest-substring-without-repeating-characters
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/




int lengthOfLongestSubstring(string s) 
{
	int len = s.size();
	int ret_max = 0;
	unordered_set<char> st;

	int left = 0;
	int right = 0;				   //��ʼ����û����

	for(int left = 0; left < len; left++)
	{
		if(left!=0)
		{
			char cl = s[left -1];
			st.erase(cl);	   //��������߽��setֵ,
		}

		/*�ƶ��Ҵ���*/
		while(right < len  ) //??ʱ��һֱ�ƶ��ұ߽�
		{ 
			char cr = s[right] ;
			if(st.count(cr)==0)
			{
				 st.insert(cr) ; //�Ѻ���ֵ����
				 right++;
			}
			else
			{
				break;
			}
		}

		if(right - left > ret_max)
			ret_max = right - left	;

	}

	return ret_max;
}



int main()
{
	string s = "abcabcbb" ;
	cout << lengthOfLongestSubstring(s) << endl;
	return 0;
}

















































