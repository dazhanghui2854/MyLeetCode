#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;


/*不允许重复的键*/





int func1(vector<int>& arr)
{

	int len = arr.size();

	map<int,int> st;

	for(int i = 0 ; i < len ;i++ )
	{
		int tmp = arr[i];
		st[tmp]++ ;
	}


	for(auto it = st.begin(); it!=st.end();it++)
	{



		cout << it->first << endl;
		if(it->second == 2)
			return it->first ;
	}



}









int main()
{
	int tmp[7] = {2,3,1,0,2,5,3};
	vector<int> arra(tmp,tmp+7);

	int ret = func1(arra);

	cout << ret << endl;
	return 0;
}































































