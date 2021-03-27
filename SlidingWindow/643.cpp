#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>


using namespace std;



//最长连续1的个数 
int langestnumber(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	vector<int> ret;

	unordered_map<int,int> st;

	for(int i=0;i < len ;i++)
	{
		tmp = arr[i] ;
		st[tmp]++ ;
	}

	for(int i=1;i <= len ;i++)
	{
		if(st.count(i) ==0)					//该key在哈希表中
		{
			ret.push_back(i);
		}
	}

	return ret;

}






int main()
{


	int tmp[8] ={1,2,2,3,3,5,6,7} ;

	vector<int> arr(tmp,tmp+8);

	vector<int> ret = losenumber(arr);

	int len = ret.size();

	for(int i=0 ; i < len;i++)
	{
		printf("%d\n",ret[i]);
	}



	return 0;
}





























































