#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>

/*
给你一个整数数组 arr， 对于元素 x ，只有当 x + 1 也在数组 arr 里时，才能记为 1 个数。

如果数组 arr 里有重复的数，每个重复的数单独计算。

 

示例 1：

输入：arr = [1,2,3]
输出：2
解释：1 和 2 被计算次数因为 2 和 3 在数组 arr 里。
示例 2：

输入：arr = [1,1,3,3,5,5,7,7]
输出：0
解释：所有的数都不算, 因为数组里没有 2、4、6、8。
示例 3：

输入：arr = [1,3,2,3,5,0]
输出：3
解释：0、1、2 被计算了因为 1、2、3 在数组里。
示例 4：

输入：arr = [1,1,2,2]
输出：2
解释：两个 1 被计算了因为有 2 在数组里。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/counting-elements
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;


int Countnumber(vector<int>& arr)
{
	int len = arr.size();
	int index= 0;
	unordered_map<int,int> st;
	int tmp = 0;
	
	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++;
	}

	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		if(st[tmp+1])
			index++;
	}

	return index;
}




int main()
{
	int tmp[5] = {1,1,3,5,8} ;
	vector<int> arr(tmp,tmp+5);

	
	printf("ret : %d\n",Countnumber(arr));
	return 0;
}


















































