#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>





using namespace std;



int majorityElement(vector<int>& arr)
{
	int len = arr.size();
	int half = len / 2 ;


	unordered_map<int,int> st;
	for(int i=0; i < len;i++)
	{
		int tmp = arr[i];
		st[tmp]++;
	}

	for(auto it = st.begin();it!=st.end();it++)
	{
		if(it->second > half)
			return it->first;
	}

	return -1 ;
}





int main()
{
	int tmp[7] = {5,2,5,3,4,5,5};
	vector<int> arr(tmp,tmp+7);

	printf("ret : %d\n",majorityElement(arr));


	return 0;
}

















































