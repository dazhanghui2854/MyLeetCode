#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



//����������ǵĵ�k��,
vector<int> yanghuik(int index)
{

	int len = index + 1	;				//index�Ǵ��������е��������
	vector<vector<int>> st(len);		//������������ڴ���
	for(int i=0; i< len ;i++)
	{
		st[i].resize(i+1);				//��i���ڴ��ط���
		st[i][0] = st[i][i] = 1;		//��ֵ��λ

		for(int j = 1; j <= i -1 ;j++)	//��ֵ�м�
		{
			st[i][j] = st[i -1][j] + st[i -1][j -1];
		}
	}

	return st[index];
}




int main()
{


	vector<int> st1 ;

	int target_row = 20 ;

	st1 = yanghuik(target_row);
	
	int cols = st1.size();
	
	
	for(int i = 0; i < cols;i++)
	{

		printf("%d ",st1[i]);
	}



	return 0;
}






























































