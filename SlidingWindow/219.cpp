#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>


/*
给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的 绝对值 至多为 k。

 

示例 1:

输入: nums = [1,2,3,1], k = 3
输出: true
示例 2:

输入: nums = [1,0,1,1], k = 1
输出: true
示例 3:

输入: nums = [1,2,3,1,2,3], k = 2
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/




using namespace std;


bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
	int len= nums.size();
	bool ret = false;
	int left = 0;
	int right = 0;
	unordered_map<int,int> st;

	while(right < len)
	{
		int tmp = nums[right];
		st[tmp]++;
		if(st[tmp] == 2)
		{
			if(right - left < k+1)
			{
				ret = true;
				return ret;
			}
		}
		else
		{
			if(right - left < k )
			{
				right++;
			}
			else 
			{
				while(right - left > k || right - left == k)
				{
					int tmp = nums[left];
					st[tmp]--;
				
					if(st[tmp ==0])
						st.erase(tmp);
					left++;
				}
			
				right++;
			}
		}
	}
	return ret;
}





int main()
{
	vector<int> arr = {1,2,3,1};
	printf("ret : %d\n",containsNearbyDuplicate(arr,3));
	return 0;
}


















































