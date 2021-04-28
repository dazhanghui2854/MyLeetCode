#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>


using namespace std;


/*
给定一个字符串，请你找出其中不含有重复字符的?最长子串?的长度。

?

示例?1:

输入: s = "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是?"wke"，所以其长度为 3。
?    请注意，你的答案必须是 子串 的长度，"pwke"?是一个子序列，不是子串。
示例 4:

输入: s = ""
输出: 0
?

提示：

0 <= s.length <= 5 * 104
s?由英文字母、数字、符号和空格组成

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-substring-without-repeating-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/




int lengthOfLongestSubstring(string s) 
{
	int len = s.size();
	int ret_max = 0;
	unordered_set<char> st;

	int left = 0;
	int right = 0;				   //开始窗口没数字

	for(int left = 0; left < len; left++)
	{
		if(left!=0)
		{
			char cl = s[left -1];
			st.erase(cl);	   //擦除出左边界的set值,
		}

		/*移动右窗口*/
		while(right < len  ) //??时候一直移动右边界
		{ 
			char cr = s[right] ;
			if(st.count(cr)==0)
			{
				 st.insert(cr) ; //把后面值插入
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

















































