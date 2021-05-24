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
	unordered_map<int, int> st;
	for (int i = 0; i < nums.size(); i++) 
	{
		int tmp = nums[i];
		//如果哈希表中找到相同的元素，返回真,在不插入的情况下确定
		//st[tmp] 可能为0也表示存在，必须用count
		if (st.count(tmp)) 
			return true;
		//将对应的key-value存入哈希表
		st[tmp] = i;
		//若哈希表长度大于k，则删除最前面那个元素
		//这样就保证哈希表中始终存放的都是数组中相邻的k个元素
		//下一次又要+所以只能存放k个哈希键值对
		if (st.size() > k) 
			st.erase(nums[i - k]);
	}
	return false;
}



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


















































