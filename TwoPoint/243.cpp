#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>


using namespace std;
/*
给定一个单词列表和两个单词 word1 和 word2，返回列表中这两个单词之间的最短距离。

示例:
假设 words = ["practice", "makes", "perfect", "coding", "makes"]

输入: word1 = “coding”, word2 = “practice”
输出: 3
输入: word1 = "makes", word2 = "coding"
输出: 1
注意:
你可以假设 word1 不等于 word2, 并且 word1 和 word2 都在列表里。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-word-distance
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/



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


		if(index1 >= 0 && index2>=0)		
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


































































