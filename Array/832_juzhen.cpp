#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>



using namespace std;

/*
给定一个二进制矩阵 A，我们想先水平翻转图像，然后反转图像并返回结果。

水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 [1, 1, 0] 的结果是 [0, 1, 1]。

反转图片的意思是图片中的 0 全部被 1 替换， 1 全部被 0 替换。例如，反转 [0, 1, 1] 的结果是 [1, 0, 0]。

 

示例 1：

输入：[[1,1,0],[1,0,1],[0,0,0]]
输出：[[1,0,0],[0,1,0],[1,1,1]]
解释：首先翻转每一行: [[0,1,1],[1,0,1],[0,0,0]]；
     然后反转图片: [[1,0,0],[0,1,0],[1,1,1]]
示例 2：

输入：[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
输出：[[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
解释：首先翻转每一行: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]]；
     然后反转图片: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/flipping-an-image
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
{
	int rows = image.size();
	int cols = image[0].size();

	vector<vector<int>> st(rows,vector<int>(cols,0));
	st = image;
	for(int i=0 ;i < rows;i++)
	{
		/*
		for(int j=0 ;j < cols /2 ;j++)
		{
			swap(st[i][j],st[i][cols -j - 1]);
		}
		*/
		//先翻转矩阵
		reverse(st[i].begin(),st[i].end());
	}
	/*再0 1 翻转*/
	for(int i= 0; i< rows;i++)
	{
		for(int j=0 ;j < cols;j++)
		{
			if(st[i][j] ==1)
				st[i][j] = 0;
			else
				st[i][j] = 1;
		}
	}
	return st;
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


































































