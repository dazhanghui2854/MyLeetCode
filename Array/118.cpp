#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;


void zhanghui()
{

}


//�������1
vector<vector<int>> yanghuisanjiao1(int numrows)
{
	vector<vector<int>> st(numrows) ; 							//����numrows�еĶ�λ���飬����δ��

	for(int i=0 ; i < numrows;i++)
	{
		st[i].resize(i+1) ;										//ÿ�д�С�����ڴ�
		st[i][0] = st[i][i] = 1 ;								//��λԪ�ظ�ֵ

		/*ÿ���м�Ԫ�ظ�ֵ,������1��i -1*/
		for(int j =1 ; j <= i -1 ;j++)
		{
			st[i][j] = st[i -1][j] + st[i -1][j -1];			//���Ʊ��ʽ
		}
		
	}

	return st;
}






int main()
{


	vector<vector<int>> st1 ;

	int target_row = 20 ;

	st1 = yanghuisanjiao1(target_row);
	
	int rows = st1.size();
	//int cols = st1[0].size();									���Ǿ��󣬲���������ӡ
	
	zhanghui();
	
	for(int i = 0; i < rows;i++)
	{
		for(int k=0 ;k <=target_row - i - 1;k++)							//ÿ�п�ͷ�ռ����ո�
		{
			printf(" ");
		}
		for(int j = 0 ;j <= i ;j++)
		{
			printf("%d ",st1[i][j]);
		}
		printf("\n");
	}



	return 0;
}





























































