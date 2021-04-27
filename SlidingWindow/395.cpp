#include <iostream>
#include <unordered_map>
#include <vector>




using namespace std;


/*
这个问题与一般性的滑动窗口问题最大的不同是：怎样保证滑动窗口能够取到所有可行解？

解决这个问题的办法是，循环26次，限制滑动窗口内的不同字符数分别i (1~26)个，这样能保证不会漏掉任何一个可行解。

具体来说，每次循环中需要记录滑动窗口内不同字符数diff_count 和出现次数大于等于k 的字符数count。逐渐右移右边界，
当diff_count 大于i时，也就是滑动窗口内的不同字符数大于当前循环限制的不同字符数，就缩减滑动窗口的左边界直到刚好满足diff_count == i。
当diff_count == count == i时，说明滑动窗口内的每个字符出现次数都大于等于k，此时滑动窗口内的元素就是一个可行解。

时间复杂度O(26 * n) 近似一下也就是O(n)了。
*/


int longestSubstring(string s, int k) 
{
	int len = s.size();
	int ret_len = 0;

	for(int i=1 ;i <= 26 ;i++)
	{
		/*以下变量必须全部 for中重置*/
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
			/*超出不同个数，左边界右移*/
			while(diffCount > i)
			{
				int tmp = s[left] - 'a';
				/*要先判断后，再--*/
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

			/*不同个数满足i && 所有类型都满足*/
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























































