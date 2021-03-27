#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>


using namespace std;



//返回 求和 = target的两个下标（有序数组）
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


































































