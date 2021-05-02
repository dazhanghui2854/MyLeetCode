#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>

/*
给定一个整数数组，判断是否存在重复元素。

如果存在一值在数组中出现至少两次，函数返回 true 。如果数组中每个元素都不相同，则返回 false 。

 

示例 1:

输入: [1,2,3,1]
输出: true
示例 2:

输入: [1,2,3,4]
输出: false
示例 3:

输入: [1,1,1,3,3,4,3,2,4,2]
输出: true

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;


bool isrepit_num(vector<int>& arr)
{
	int len = arr.size();
	int tmp= 0;
	unordered_map<int,int> st;

	
	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++;
	}

	for(auto it = st.begin() ;it!=st.end() ;it++)
	{
		if(it->second > 1)
			return true;
	}

	return false;
}




int main()
{
	int tmp[5] = {1,1,3,5,8} ;
	vector<int> arr(tmp,tmp+5);

	
	printf("ret : %d\n",isrepit_num(arr));
	return 0;
}


















































