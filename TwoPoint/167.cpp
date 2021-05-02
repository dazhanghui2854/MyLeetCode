#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>


using namespace std;
/*
给定一个已按照 升序排列  的整数数组 numbers ，请你从数组中找出两个数满足相加之和等于目标数 target 。

函数应该以长度为 2 的整数数组的形式返回这两个数的下标值。numbers 的下标 从 1 开始计数 ，所以答案数组应当满足 1 <= answer[0] < answer[1] <= numbers.length 。

你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。

 
示例 1：

输入：numbers = [2,7,11,15], target = 9
输出：[1,2]
解释：2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。
示例 2：

输入：numbers = [2,3,4], target = 6
输出：[1,3]
示例 3：

输入：numbers = [-1,0], target = -1
输出：[1,2]
 

提示：

2 <= numbers.length <= 3 * 104
-1000 <= numbers[i] <= 1000
numbers 按 递增顺序 排列
-1000 <= target <= 1000
仅存在一个有效答案

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


vector<int> min_distance(vector<int>& arr ,int target)
{
	int len = arr.size();

	int left  = 0;
	int right = len - 1 ;
	int index1 = 0;
	int index2 = 0;

	while(left < right)
	{
		if(arr[left] + arr[right] < target)
		{
			left++;
		}
		else if(arr[left] + arr[right] > target)
		{
			right--;
		}
		else if(arr[left] + arr[right] == target)
		{
			index1 = left + 1;
			index2 = right + 1;
			break;
		}
	}

	int tmp[2] ;
	tmp[0] = index1;
	tmp[1] = index2;

	vector<int> st(tmp,tmp + 2);
	return st;
}




int main()
{

	int tmp[6] = {1,3,4,8,9,12} ;
	vector<int> st(tmp,tmp+6);
	
	vector<int> ret(min_distance(st,17));

	int len = ret.size();
	for(int i=0 ; i < len;i++)
	{
		printf("%d\n",ret[i]);
	}


	return 0;
}


































































