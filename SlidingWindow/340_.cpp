#include <iostream>
#include <unordered_map>




using namespace std;


/*
给定一个字符串 s ，找出 至多 包含 k 个不同字符的最长子串 T。

示例 1:

输入: s = "eceba", k = 2
输出: 3
解释: 则 T 为 "ece"，所以长度为 3。
示例 2:

输入: s = "aa", k = 1
输出: 2
解释: 则 T 为 "aa"，所以长度为 2。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-substring-with-at-most-k-distinct-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
			char cl = s[left -1];
			if(st[cl] == 1)
				st.erase(cl);
			else
				st[cl]--;
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
				st.erase(cR);		
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























































