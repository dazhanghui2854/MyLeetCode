#include <iostream>
#include <vector>
#include <stdio.h>



using namespace std;



//�ж��ǲ��ǶԽ��߶���ȵľ���
bool isbulicijuzhen(vector<vector<int>> & matrix )
{
	//�жϴ�1,1��ʼ ÿ��Ԫ�ص����Ͻ�Ԫ���ǲ������Լ���Ⱦ���

	int rows = matrix.size();
	int cols = matrix[0].size();

	for(int i=1 ;i < rows;i++)
	{
		for(int j=0;j < cols;j++)
		{
			if(matrix[i][j]!=matrix[i-1][j-1])
				return false;
		}
	}


	return true;
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

































































