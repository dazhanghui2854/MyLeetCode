#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <map>




using namespace std;


//返回第三大的数，如果不存在返回最大的
int third_maxnumber(vector<int>& arr)
{
	int len = arr.size();
	int index= 0;
	int tmp = 0;
	map<int,int> st;


	for(int i=0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++;
	}
	
	auto it1 = st.begin();
	auto it2 = st.end();

	
	if(st.size() < 3)
	{
		it2--;					//--后才是最好一个元素的位置
		return it2->first;
	}	
	else
	{
		it2--;					//迭代器只能如此运算
		it2--;
		it2--;
		return it2->first;
	}	

}




int main()
{
	int tmp[3] = {1,2,3} ;
	vector<int> arr(tmp,tmp+3);




	int ret = third_maxnumber(arr);
	printf("target :%d\n",ret);
	
	return 0;
}


















































