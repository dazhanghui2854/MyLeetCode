#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>

/*
给定一个非空且只包含非负数的整数数组 nums，数组的度的定义是指数组里任一元素出现频数的最大值。

你的任务是在 nums 中找到与 nums 拥有相同大小的度的最短连续子数组，返回其长度。

 

示例 1：

输入：[1, 2, 2, 3, 1]
输出：2
解释：
输入数组的度是2，因为元素1和2的出现频数最大，均为2.
连续子数组里面拥有相同度的有如下所示:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
最短连续子数组[2, 2]的长度为2，所以返回2.
示例 2：

输入：[1,2,2,3,1,4,2]
输出：6

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/degree-of-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;


int findShortestSubArray(vector<int>& nums) 
{
	int len =nums.size();
	int ret_min = INT_MAX;
	unordered_map<int,int> st;
	vector<int> st1;
	/*将数存入哈希表*/
	for(auto tmp : nums)
	{
		st[tmp]++;
	}

	int max = -1;
	/*找到出现频率最多的数max*/
	for(auto it=st.begin();it!=st.end();it++)
	{
		if(it->second > max)
			max = it->second;
	}

	/*将出现频率为max的数全存入st1数组中*/
	for(auto it=st.begin();it!=st.end();it++)
	{  
		if(it->second == max)
		{
				st1.push_back(it->first);
		}     
	}

	/*遍历出现最多次数的数*/
	for(auto tmp : st1)
	{
		int first_index_found = 0;
			int first_index = 0;
			int last_index = 0;
		for(int i=0 ;i < len;i++)
		{ 
			/*找到第一次出现坐标first_index*/
			if(nums[i] == tmp && first_index_found==0)
			{
				first_index = i;
				first_index_found =1;
			}
			/*找到最后出现的坐标last_index*/
			if(nums[i] == tmp)
				last_index = i;
		}
		if(last_index -first_index+1 < ret_min)
			ret_min = last_index -first_index+1;
	}
	return ret_min;
}





int main()
{
	int tmp[7] = {1,2,2,3,1,4,2} ;
	vector<int> arr(tmp,tmp+7);

	
	printf("ret : %d\n",shortestLength(arr));
	return 0;
}


















































