#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;




int binary_search_left(vector<int>& arr , int target)
{
	int len = arr.size();
	if(len == 0)
		return -1;

	int left = 0;
	int right = len - 1 ;

	while(left <= right)
	{
		int mid = (left + right) / 2 ;

		if(arr[mid] < target)
		{
			left = mid + 1;
		}
		else if(arr[mid] > target)
		{
			right = mid - 1;
		}
		else if(arr[mid] == target && )
		{
			right = mid -1 ;
		}
	}

	/*左边界left从最小开始，只可能向右越界*/
	if(arr[left] != target || left > len -1 )
	{
		return -1 ;
	}
	
	return left ;
}





int main()
{

	int tmp[7] = {74,25,12,32,69,32,38} ;

	vector<int> arr(tmp,tmp+7);

	sort(arr.begin(),arr.end());




	for(int i=0; i < 7;i++)
	{
		printf("arr[%d] : %d \n",i,arr[i]);	
	}

	int index = binary_search_right(arr,32);
	printf("index : %d\n",index);
	return 0;
}























































