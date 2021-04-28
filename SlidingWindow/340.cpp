#include <iostream>
#include <unordered_map>




using namespace std;


/*
����һ���ַ��� s ���ҳ�?����?���� k ����ͬ�ַ�����Ӵ� T��

ʾ�� 1:

����: s = "eceba", k = 2
���: 3
����: �� T Ϊ "ece"�����Գ���Ϊ 3��
ʾ�� 2:

����: s = "aa", k = 1
���: 2
����: �� T Ϊ "aa"�����Գ���Ϊ 2��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/longest-substring-with-at-most-k-distinct-characters
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/


int lengthOfLongestSubstringKDistinct(string s, int k) 
{
	int len = s.size();

	int left = 0;
	int right = 0;
	int max_len = 0;
	unordered_map<char,int>st;


	for(int left = 0; left < len;left++)
	{
		if(left!=0)
		{
			char cL = s[left - 1];
			st[cL]--;
			if(st[cL] == 0)
				st.erase(cL);
		}

		while(right < len)
		{
			char cR = s[right];
			st[cR]++;
			if(st.size()<= k)
			{
				right++;
			}
			else
			{
				st.erase(cR);				//�����ֵ��ɾ��
				break;
			}
		}

		if(right - left > max_len)
			max_len = right - left ;

	}
	return max_len;
}





int main()
{

 string s = "eceba" ;

 cout << lengthOfLongestSubstringKDistinct(s,2) << endl;




	return 0;
}























































