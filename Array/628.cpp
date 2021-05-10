#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

/*
给你一个整型数组 nums ，在数组中找出由三个数组成的最大乘积，并输出这个乘积。

 

示例 1：

输入：nums = [1,2,3]
输出：6
示例 2：

输入：nums = [1,2,3,4]
输出：24
示例 3：

输入：nums = [-1,-2,-3]
输出：-6

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-product-of-three-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
int maxproduction(vector<int>& arr)
{
	int len = arr.size();

	/*排序*/
	sort(arr.begin(),arr.end());
	
	int tmp1 = arr[len -1] * arr[len - 2] * arr[len - 3] ;  //全正或者全负！！！
	int tmp2 = arr[0] * arr[1] * arr[len -1] ;				//两负数（绝对值最大）一正（最大）

	return max(tmp1,tmp2);

}



int main()
{

	int tmp[3] = {-1,-2,-3};
	vector<int> arr(tmp,tmp+3);
	printf("max : %d\n",maxproduction(arr));

	return 0;
}





























































