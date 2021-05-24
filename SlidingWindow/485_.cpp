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
 

提示：

输入的数组只包含 0 和 1 。
输入数组的长度是正整数，且不超过 10,000。

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




int langestnumber(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	vector<int> ret;

	unordered_map<int,int> st;

	for(int i=0;i < len ;i++)
	{

		tmp = arr[i] ;
		st[tmp]++ ;
	}

	for(int i=1;i <= len ;i++)
	{

		if(st.count(i) ==0)			
		{
			ret.push_back(i);
		}
	}

	return ret;

}



int main()
{


	int tmp[8] ={1,2,2,3,3,5,6,7} ;

	vector<int> arr(tmp,tmp+8);

	vector<int> ret = losenumber(arr);

	int len = ret.size();

	for(int i=0 ; i < len;i++)

	{
		printf("%d\n",ret[i]);
	}



	return 0;
}





























































