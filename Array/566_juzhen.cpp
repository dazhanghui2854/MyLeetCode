#include <iostream>
#include <vector>
#include <stdio.h>



using namespace std;



//ԭʼ���� תΪ r*c�Ƿ��У�����ת�����з���ԭ����
vector<vector<int>> reshape(vector<vector<int>> & matrix ,int r, int c)
{

	int rows = matrix.size();			//?��
	int cols = matrix[0].size();		//?��

	int index = 0;
	int index1 = 0;


	if(rows * cols != r * c)
	{
		return matrix;
	}

	vector<int> tmp(rows * cols) ;
	vector<vector<int>> res(r,vector<int>(c,0));				//����ת������ռ䣬��ʼֵ0
	for(int i = 0 ;i < rows ;i++)
	{
		for(int j=0;j < cols;j++)
		{
			tmp[index] = matrix[i][j] ; 
			index++;
		}
	}

	for(int i = 0 ;i < r ;i++)
	{
		for(int j=0;j < c;j++)
		{
			res[i][j] = tmp[index1] ; 
			index1++;
		}
	}

	
	return res;
}





int main()
{

	int index = 0;


	vector<vector<int>> arr(3,vector<int>(4,0));
	for(int i =0 ;i < 3 ;i++)
	{
		for(int j=0;j < 4 ;j++)
		{
			arr[i][j] = index ;
			printf("%d ",arr[i][j]);
			index++;
		}
		printf("\n");
	} 



   vector<vector<int>> arr1(4,vector<int>(3,0));


	arr1 = reshape(arr,2,6);

	printf("\n");

	int rows = arr1.size();
	int cols = arr1[0].size();

	for(int i =0 ;i < rows ;i++)
	{
		for(int j=0;j < cols ;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}

	

	return 0;
}

































































