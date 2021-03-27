#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>




using namespace std;


//对于X，X+1存在返回num+1
int Countnumber(vector<int>& arr)
{
	int len = arr.size();
	int index= 0;
	unordered_map<int,int> st;
	int tmp = 0;
	
	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++;
	}

	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		if(st[tmp+1])
			index++;
	}

	return index;
}




int main()
{
	int tmp[5] = {1,1,3,5,8} ;
	vector<int> arr(tmp,tmp+5);

	
	printf("ret : %d\n",Countnumber(arr));
	return 0;
}


















































