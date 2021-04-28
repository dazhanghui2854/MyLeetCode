#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>


/*
给定一个整数数组和一个整数?k，判断数组中是否存在两个不同的索引?i?和?j，使得?nums [i] = nums [j]，并且 i 和 j?的差的 绝对值 至多为 k。

?
示例?1:

输入: nums = [1,2,3,1], k = 3
输出: true
示例 2:

输入: nums = [1,0,1,1], k = 1
输出: true
示例 3:

输入: nums = [1,2,3,1,2,3], k = 2
输出: false

*/




using namespace std;


//判断数组中是否存在重复数组
bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
	int len= nums.size();
	bool ret = false;
	int left = 0;
	int right = 0;
	unordered_map<int,int> st;
	/*一直右移*/
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
			/*如果当前窗口大小还没过临界*/
			if(right - left < k )
			{
				right++;
			}
			else //过了或者已达到临界，一直移动左窗口直到满足
			{
				while(right - left > k || right - left == k)
				{
					int tmp = nums[left];
					st[tmp]--;
					/*最好加上*/
					if(st[tmp ==0])
						st.erase(tmp);
					left++;
				}
				/*right需一直右移*/
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


















































