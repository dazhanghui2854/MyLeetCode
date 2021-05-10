#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>


using namespace std;

/*
给定一个二进制数组， 计算其中最大连续 1 的个数。

 

示例：

输入：[1,1,0,1,1,1]
输出：3
解释：开头的两位和最后的三位都是连续 1 ，所以最大连续 1 的个数是 3.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/max-consecutive-ones
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


int findMaxConsecutiveOnes(vector<int>& nums) 
{
	int len = nums.size();
	int ret_max = 0;
	int sum = 0;
	for(int i=0 ;i < len;i++)
	{
		if(nums[i] ==1)
		{
			sum++;
			if(sum > ret_max)
				ret_max = sum;
		}
		else
		{
			sum = 0;
		}
	}
	return ret_max;
}


int main()
{
	vector<int> arr = {1,1,0,1,1,1} ;

	printf("ret : %d\n",findMaxConsecutiveOnes(arr));
	return 0;
}





























































