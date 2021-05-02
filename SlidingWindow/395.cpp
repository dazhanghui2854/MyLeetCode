#include <iostream>
#include <unordered_map>
#include <vector>




using namespace std;


/*
给你一个字符串 s 和一个整数 k ，请你找出 s 中的最长子串， 要求该子串中的每一字符出现次数都不少于 k 。返回这一子串的长度。

 

示例 1：

输入：s = "aaabb", k = 3
输出：3
解释：最长子串为 "aaa" ，其中 'a' 重复了 3 次。
示例 2：

输入：s = "ababbc", k = 2
输出：5
解释：最长子串为 "ababb" ，其中 'a' 重复了 2 次， 'b' 重复了 3 次。
 

提示：

1 <= s.length <= 104
s 仅由小写英文字母组成
1 <= k <= 105

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-substring-with-at-least-k-repeating-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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























































