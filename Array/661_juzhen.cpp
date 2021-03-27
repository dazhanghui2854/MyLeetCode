#include <iostream>
#include <vector>
#include <stdio.h>



using namespace std;



//矩阵转置
vector<vector<int>> transpose(vector<vector<int>> & matrix)
{

	int rows = matrix.size();			//?行
	int cols = matrix[0].size();		//?列


	vector<vector<int>> res(cols,vector<int>(rows,0));				//创建转至矩阵空间，初始值0
	for(int i = 0 ;i < rows ;i++)
	{
		for(int j=0;j < cols;j++)
		{
			res[j][i] = matrix[i][j] ; 
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


	arr1 = transpose(arr);

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

































































