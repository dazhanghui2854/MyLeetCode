#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;


void zhanghui()
{

}


//杨辉三角1
vector<vector<int>> yanghuisanjiao1(int numrows)
{
	vector<vector<int>> st(numrows) ; 							//创建numrows行的二位数组，列数未定

	for(int i=0 ; i < numrows;i++)
	{
		st[i].resize(i+1) ;										//每行大小分配内存
		st[i][0] = st[i][i] = 1 ;								//首位元素赋值

		/*每行中间元素赋值,纵坐标1，i -1*/
		for(int j =1 ; j <= i -1 ;j++)
		{
			st[i][j] = st[i -1][j] + st[i -1][j -1];			//递推表达式
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
	//int cols = st1[0].size();									不是矩阵，不能这样打印
	
	zhanghui();
	
	for(int i = 0; i < rows;i++)
	{
		for(int k=0 ;k <=target_row - i - 1;k++)							//每行开头空几个空格
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





























































