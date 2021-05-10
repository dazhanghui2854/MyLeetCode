#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>




using namespace std;

/*
给你一个整数数组 nums，请编写一个能够返回数组 “中心下标” 的方法。

数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。

如果数组不存在中心下标，返回 -1 。如果数组有多个中心下标，应该返回最靠近左边的那一个。

注意：中心下标可能出现在数组的两端。

 

示例 1：

输入：nums = [1, 7, 3, 6, 5, 6]
输出：3
解释：
中心下标是 3 。
左侧数之和 (1 + 7 + 3 = 11)，
右侧数之和 (5 + 6 = 11) ，二者相等。
示例 2：

输入：nums = [1, 2, 3]
输出：-1
解释：
数组中不存在满足此条件的中心下标。
示例 3：

输入：nums = [2, 1, -1]
输出：0
解释：
中心下标是 0 。
下标 0 左侧不存在元素，视作和为 0 ；
右侧数之和为 1 + (-1) = 0 ，二者相等。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-pivot-index
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
数学：leftsum  rightsum = sum - leftsum -nums[i]
*/

int zhongxinIndex(vector<int>& arr)
{
	int len = arr.size();
	int sum_begin = 0;
	int sum_end = 0;
	
	//计算0坐标
	for(int i=1 ;i < len;i++)
	{
		sum_begin+=arr[i];
	}

	if(sum_begin == 0)
		return 0;
	
	for(int i =1; i < len - 1;i++)
	{
		int sum_left = 0;
		int sum_right = 0;
		for(int j =0 ; j < i ;j++)
		{
			sum_left+=arr[j];
		}

		for(int k =i+1 ; k < len ;k++)
		{
			sum_right+=arr[k];
		}

		if(sum_left == sum_right)
			return i;
	}

	//计算最后坐标
	for(int s=0;s<len -1 ;s++)
	{
		sum_end+=arr[s];
	}

	if(sum_end ==0)
		return len -1 ;
	

	return -1;

}


//中心索引,正确方法
int zhongxinIndex1(vector<int>& arr)
{
	int len = arr.size();
	int sum = 0;
	int total = accumulate(arr.begin(),arr.end(),0);

	for(int i=0; i< len;i++)
	{
		if(2 * sum ==  total - arr[i])
		{
			return i;
		}

		sum+=arr[i] ;
	}
	

	return -1;

}




int main()
{
	int tmp[6] = {1,7,3,6,5,6} ;
	vector<int> arr(tmp,tmp+6);

	
	//printf("ret : %d\n",zhongxinIndex(arr));
	printf("ret : %d\n",zhongxinIndex1(arr));
	return 0;
}


















































