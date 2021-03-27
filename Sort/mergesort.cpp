#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <vector>

using namespace std;



void merge(vector<int>& arr , int L ,int M, int R)
{
	int len = R - L + 1;
	int* p = (int*)malloc(sizeof(int) * len);

	/*左右数组、待填充起始坐标*/
	int i = L ;							//import
	int j = M + 1;						//import
	int k = 0;
	
	while(i <= M && j <= R)
	{
		if(arr[i] < arr[j])
		{
			p[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			p[k] = arr[j];
			k++;
			j++;
		}
	}

	while( i <= M)
	{
		p[k] = arr[i];
		k++;
		i++;
	}

	while( j <= R)
	{
		p[k] = arr[j];
		k++;
		j++;
	}

	for(i=0;i < len;i++)
	{
		arr[L+i] = p[i];									//import
	}



	free(p);
}




void mergesort(vector<int>& arr,int L, int R)
{
	if(L ==R)
		return ;

	int M = ( R + L) / 2 ;
	mergesort(arr,L,M);							//M取
	mergesort(arr,M+1,R);
	merge(arr,L,M,R);
}






int main()
{


	int tmp[8] ={25,14,36,52,18,96,45,44};

	vector<int> arr(tmp,tmp+8);

	mergesort(arr,2,7);

	for(int i=2; i< 8;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}




	return 0;
}













































