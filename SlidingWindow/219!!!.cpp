#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>




using namespace std;


//判断数组中是否存在重复数组
bool isrepit_num(vector<int>& arr)
{
	int len = arr.size();
	int tmp= 0;
	unordered_map<int,int> st;

	
	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++;
	}

	for(auto it = st.begin() ;it!=st.end() ;it++)
	{
		if(it->second > 1)
			return true;
	}

	return false;
}




int main()
{
	int tmp[5] = {1,1,3,5,8} ;
	vector<int> arr(tmp,tmp+5);

	
	printf("ret : %d\n",isrepit_num(arr));
	return 0;
}


















































