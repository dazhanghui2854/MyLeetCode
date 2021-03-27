#include <iostream>
#include <stdio.h>
#include <vector>


using namespace std;


void heapify(vector<int>& arr, int len , int i)			//对当前长度为len的完全二叉树在i节点处做heapify的操作
{


	
	int max = i;
	int c1 = 2 * i + 1;			//左子节点
	int c2 = 2 * i + 2;			//右子节点

	if(arr[max] < arr[c1] && c1 < len)			//if 
	{
		max = c1 ;
	}
	
	if(arr[max] < arr[c2] && c2 < len)			//else if 不可，必须都判断一次
	{
		max = c2;
	}

	if(max !=i)
	{
		swap(arr[i],arr[max]);
		heapify(arr,len,max);		//对交换后的max节点继续做heapify
	}
}

void buildheap(vector<int>& arr)
{
	int len = arr.size();
	int last_node = len - 1;
	int parent = (last_node - 1) / 2;				

	for(int i=parent; i >=0 ;i--)				//从最后一个非叶节点做heapify
	{
		heapify(arr,len,i);
	}
}


void heapsort(vector<int>& arr)
{
	int len = arr.size();
	buildheap(arr);

	for(int i=len -1 ;i >=0 ;i--)			//对数组最后一个数动手，最大值
	{
		swap(arr[i],arr[0]);
		heapify(arr,i,0);
	}
}



int main()
{

	int tmp[8] = {52,14,12,63,96,85,25,27};
	vector<int> arr(tmp,tmp+8);


	heapsort(arr);

	for(int i=0; i < 8;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}


	return 0;
}














































