#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



//返回杨辉三角的第k行,
vector<int> yanghuik(int index)
{

	int len = index + 1	;				//index是创建多少行的杨辉三角
	vector<vector<int>> st(len);		//分配杨辉三角内存行
	for(int i=0; i< len ;i++)
	{
		st[i].resize(i+1);				//第i行内存重分配
		st[i][0] = st[i][i] = 1;		//赋值首位

		for(int j = 1; j <= i -1 ;j++)	//赋值中间
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






























































