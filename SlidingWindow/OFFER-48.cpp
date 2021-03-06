#include <iostream>
#include <unordered_map>


using namespace std;


/*
请从字符串中找出一个最长的不包含重复字符的子字符串，计算该最长子字符串的长度。

 

示例 1:

输入: "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
			else	//
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
























































