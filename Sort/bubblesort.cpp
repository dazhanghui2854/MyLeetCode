#include <iostream>
#include <stdio.h>
#include <vector>


using namespace std;







void bubblesort(vector<int>& arr)
{
	int len = arr.size();
	if(len ==0 || len==1)
		return ;

	int i;
	int j;
	for(i=0 ; i < len -1 ;i++)
	{
		for(j=0; j< len -1 -i;j++)
		{
			if(arr[j+1] < arr[j])
			{
				swap(arr[j],arr[j+1]);
			}
			
		}

	}
}








int main()
{
	int tmp[8] ={25,14,36,52,18,96,45,44};

	vector<int> arr(tmp,tmp+8);

	bubblesort(arr);

	for(int i=0; i< 8;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}

	return 0;
}





























































