#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>




using namespace std;


//中心索引
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


















































