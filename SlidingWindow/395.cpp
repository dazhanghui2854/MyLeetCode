#include <iostream>
#include <unordered_map>
#include <vector>




using namespace std;


/*
����һ���ַ��� s ��һ������ k �������ҳ� s �е���Ӵ���?Ҫ����Ӵ��е�ÿһ�ַ����ִ����������� k ��������һ�Ӵ��ĳ��ȡ�

?

ʾ�� 1��

���룺s = "aaabb", k = 3
�����3
���ͣ���Ӵ�Ϊ "aaa" ������ 'a' �ظ��� 3 �Ρ�
ʾ�� 2��

���룺s = "ababbc", k = 2
�����5
���ͣ���Ӵ�Ϊ "ababb" ������ 'a' �ظ��� 2 �Σ� 'b' �ظ��� 3 �Ρ�
?

��ʾ��

1 <= s.length <= 104
s ����СдӢ����ĸ���
1 <= k <= 105

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/longest-substring-with-at-least-k-repeating-characters
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/


int longestSubstring(string s, int k) 
{
	int len = s.size();
	int ret_len = 0;


	

	for(int i=1 ;i <= 26 ;i++)
	{
		vector<int> st(26,0);
		int left = 0;
		int right = 0;
		int diffCount = 0;
		int okCount = 0;
		while(right < len)
		{
			int tmp = s[right] - 'a' ;
			st[tmp]++ ;

			if(st[tmp] == 1)
			{
				diffCount++;
			}
			if(st[tmp] == k)
			{
				okCount++;
			}
			right++;
			/*������ͬ��������߽�����*/
			while(diffCount > i)
			{
				int tmp = s[left] - 'a';

				if(st[tmp] == 1)
				{
					diffCount--;
				}
				if(st[tmp] == k)
				{
					okCount--;
				}
				st[tmp]--;
				left++;
			}
			if(diffCount == i && okCount == i)
			{
				ret_len = max(ret_len,right - left);
			}
		}
	}
	return ret_len;
}






int main()
{

 string s = "aaabb" ;

 cout << longestSubstring(s,3) << endl;


	return 0;
}























































