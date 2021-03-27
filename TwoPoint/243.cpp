#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>


using namespace std;



//两个最短单词距离
int min_distance(vector<string>& arr ,string word1 ,string word2)
{
	int len = arr.size();
	int index1 = -1;
	int index2 = -1;
	int min_distance = len ;

	for(int i =0 ;i < len  ;i++)					
	{
		if(arr[i] == word1)
			index1 = i;

		if(arr[i] == word2)
			index2 = i;


		if(index1 >= 0 && index2>=0)			//两个坐标都找到赋值了
		{
			if(min_distance > abs(index1 - index2))
			{
				min_distance = abs(index1 - index2);
			}
		}
		
	}
	return min_distance   		
}




int main()
{



	return 0;
}


































































