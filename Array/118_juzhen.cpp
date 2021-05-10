#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;


/*
给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。



在杨辉三角中，每个数是它左上方和右上方的数的和。

示例:

输入: 5
输出:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/pascals-triangle
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//杨辉三角1
vector<vector<int>> generate(int numrows)
{
	vector<vector<int>> st(numrows) ; 							//创建numrows行的二位数组，numrows行列数未定

	/*前numrows行*/
	for(int i=0 ; i < numrows;i++)
	{
		st[i].resize(i+1) ;										//每行大小分配内存
		st[i][0] = st[i][i] = 1 ;								//首元素尾元素都为1

		/*每行中间元素赋值,纵坐标1 ~ i -1*/
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

	st1 = generate(target_row);
	
	int rows = st1.size();										//行数
	//int cols = st1[0].size();									不是矩阵，不能这样打印
	
/*
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
*/

	for(int i = 0 ; i< rows ;i++)
	{
		for(int j = 0 ; j <= i ;j++)
		{
			printf("%d ",st1[i][j]);
		}
		printf("\n");
	}
	return 0;
}




