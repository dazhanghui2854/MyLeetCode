#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>



using namespace std;




//ͼ��ת
vector<vector<int>> flapImage(vector<vector<int>>& arr)
{
	int rows = arr.size();		//��
	int cols = arr[0].size();	//��


	vector<vector<int>> ret(rows,vector<int>(cols,0)) ;

	

	for(int i = 0 ; i < rows;i++ )
	{
		for(int j=0;j < cols / 2 ;j++)						//!!!!!!!!!!!!!swap(��ʽ < cols / 2)
		{
			swap(arr[i][j],arr[i][cols - j - 1]);			//!!!!!!!!!!!!!swap(��ʽ j ,len -j - 1)
		}
	}

	for(int i = 0 ; i < rows;i++ )
	{
		for(int j=0 ; j < cols ;j++)
		{
			if(arr[i][j] == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 0;
			}
		}
	}
	ret = arr;												//=���ػ���  ���캯����ʼ��vector<vector<int>> ret(arr);
	return ret;

}


int main()
{
	int index = 0 ;

	vector<vector<int>> tmp(3,vector<int>(3,0));
	for(int i=0;i<3;i++)
	{
		for(int j=0 ;j < 3 ;j++)
		{
			tmp[i][j] = index ;
			index++;
			//printf("%d ",tmp[i][j]);
		}
	}

	//printf("\n");

	vector<vector<int>> tmp1(3,vector<int>(3,0));

	tmp1 = flapImage(tmp) ;


	for(int i=0;i<3;i++)
	{
		for(int j=0 ;j < 3 ;j++)
		{
			printf("%d ",tmp1[i][j]);
			
		}
		printf("\n");
	}



	return 0;
}


































































