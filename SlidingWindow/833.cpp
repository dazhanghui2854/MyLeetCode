#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>


using namespace std;



//较大分组的位置
vector<vector<int>> maxproduction(string s)
{
	int len =s.size();
	int left = 0;
	int right = 0;

	vector<vector<int>> st;

	while(left < len)					//结束总体循环
	{
		right = left ;					//一定要在此赋值
		for(int i=left;i< len;i++)		//单次求解分组值
		{
			if(s[i] == s[i+1])
			{
				right++;				//移动右值下标
			}
			else
			{
				int length = right - left ;
				if(length >= 2)
				{
					st.push_back({left,right}) ;			//二维数组赋值！！！！！！！！！！！
				}
				left = i+1;									//在算出结果后再重新赋值 left;						
				break;
			}
		}
	}
	return st;
}




int main()
{

	string tmp = {"abbcccdddddee"};
	
	vector<vector<int>> st;

	st = maxproduction(tmp);

	int rows = st.size();
	int cols = st[0].size();
	for(int i=0; i < rows;i++)
	{
		for(int j=0; j< cols;j++)
		{
			printf("%d ",st[i][j]);
		}
		printf("\n");
	}


	return 0;
}





























































