#include <iostream>
#include <stdio.h>
#include <vector>




using namespace std;


void selectsort(vector<int>& arr)
{
	int len = arr.size();
	if(len == 1 || len ==0)
		return ;

	int i;
	int j;
	int index =0;
	int min = 0;
	for(i =0 ;i < len - 1;i++)
	{
		/*假设第一个比对数字最小*/
		index = i+1;
		min = arr[i+1];
		for(j =i+1;j<len ;j++)
		{

			if(arr[j] < min)
			{
				index = j;
				min = arr[j];
			}
			
		}
		
		if(arr[i] > min)
		{
			swap(arr[i],arr[index]);
		}
		
	}
}






int main()
{
	int tmp[8] ={25,14,36,52,18,96,45,44};

	vector<int> arr(tmp,tmp+8);

	//selectsort(arr);
	insertsort(arr);
	for(int i=0; i< 8;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}


	return 0;
}




















































