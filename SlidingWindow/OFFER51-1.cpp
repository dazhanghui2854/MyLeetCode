#include <iostream>
#include <vector>



using namespace std;


/*
给定一个数组 nums 和滑动窗口的大小 k，请找出所有滑动窗口里的最大值。

示例:

输入: nums = [1,3,-1,-3,5,3,6,7], 和 k = 3
输出: [3,3,5,5,6,7] 
解释: 

  滑动窗口的位置                最大值
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
 

提示：

你可以假设 k 总是有效的，在输入数组不为空的情况下，1 ≤ k ≤ 输入数组的大小。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/


vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
	vector<int> ret;


	int len = nums.size();
	if(len == 0)								//
		return ret;

	for( int i=0;i < len - k+1;i++)
	{
		int max = nums[i];						//
		for(int j=i;j<=i+k -1;j++)
		{
			if(nums[j] > max)
			{
				max = nums[j];
			} 
		}
		ret.push_back(max);
	}
	return ret;
}




int main()
{
	int tmp[8] = {1,3,-1,-3,5,3,6,7};
	int k = 3;

	vector<int> st(tmp,tmp+8);

	
	vector<int> ret = maxSlidingWindow(st,k);

	for(int i=0;i < ret.size();i++)
	{
		cout << ret[i] <<endl ;
	}




	return 0;
}


























