#include <iostream>
#include <vector>
#include <stdio.h>

/*
在MATLAB中，有一个非常有用的函数 reshape，它可以将一个矩阵重塑为另一个大小不同的新矩阵，但保留其原始数据。

给出一个由二维数组表示的矩阵，以及两个正整数r和c，分别表示想要的重构的矩阵的行数和列数。

重构后的矩阵需要将原始矩阵的所有元素以相同的行遍历顺序填充。

如果具有给定参数的reshape操作是可行且合理的，则输出新的重塑矩阵；否则，输出原始矩阵。

示例 1:

输入: 
nums = 
[[1,2],
 [3,4]]
r = 1, c = 4
输出: 
[[1,2,3,4]]
解释:
行遍历nums的结果是 [1,2,3,4]。新的矩阵是 1 * 4 矩阵, 用之前的元素值一行一行填充新矩阵。
示例 2:

输入: 
nums = 
[[1,2],
 [3,4]]
r = 2, c = 4
输出: 
[[1,2],
 [3,4]]
解释:
没有办法将 2 * 2 矩阵转化为 2 * 4 矩阵。 所以输出原矩阵。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reshape-the-matrix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
{
	int row = mat.size();
	int col = mat[0].size();

	/*创建r行c列初值为0矩阵*/
	vector<vector<int>> ret(r,vector<int>(c,0));

	/*矩阵宽*高 元素个数不一致，直接return*/
	if(row * col != r*c)
		return mat;

	vector<int> st;
	/*遍历矩阵，将元素push至st*/
	for(int i=0;i < row;i++)
	{
		for(int j=0;j<col;j++)
		{
			int tmp = mat[i][j];
			st.push_back(tmp);
		}
	}

	/*遍历ret,将st中值逐个赋值至ret中*/
	int index = 0;
	for(int i = 0; i< r ;i++)
	{
		for(int j=0 ; j< c;j++)
		{
			ret[i][j] = st[index];
			index++;
		}
	}
	return ret;
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

































































