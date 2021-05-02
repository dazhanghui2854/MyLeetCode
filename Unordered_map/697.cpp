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


int shortestLength(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	int flag = 0;

	int max = 0;
	int max_num = 0;
	
	unordered_map<int,int> st;
	vector<int> st1 ;
	int ret = len;
	
	
	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++ ;
	}
	/*1、找到最多的数是多少*/
	for(auto it = st.begin(); it!=st.end();it++)
	{
		if(it->second > max)
		{
			max = it->second ;
		}
	}
	/*2、将符合1条件的数全找到，push_back到数组中，以便后续使用*/	
	for(auto it = st.begin(); it!=st.end();it++)
	{
		if(it->second == max)
		{
			st1.push_back(it->first);
		}
	}
	
	for(auto it = st1.begin(); it!=st1.end();it++)
	{
		max_num = *it ;		//迭代器访问容器数组元素
		int index1 = 0;		//开始左边
		int index2 = 0;		//结束坐标
		for(int j=0; j < len;j++)
		{
			if(flag == 0)
			{
				if(arr[j] == max_num)
				{
					index1 = j;
					flag = 1;
				}
			}
			if(arr[j] == max_num)
			{
				index2 = j;
			}	
		}
		if(ret > index2 - index1 + 1)
		{
			ret = index2 - index1 + 1 ;
		}

	}

	return ret;
}





int main()
{
	int tmp[7] = {1,2,2,3,1,4,2} ;
	vector<int> arr(tmp,tmp+7);

	
	printf("ret : %d\n",shortestLength(arr));
	return 0;
}


















































