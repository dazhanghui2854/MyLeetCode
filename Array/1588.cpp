#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>




using namespace std;


//求奇数子素组的所有合
int sumsubLength(vector<int>& arr)
{
	int len = arr.size();
	int sum = 0;
	for(int i = 0 ;i < len ;i++)
	{
		for(int lentmp = 1; lentmp + i <= len ;lentmp+=2)
		{
			sum+=accumulate(arr.begin()+i,arr.begin()+i+lentmp,0) ;
		}
	}

	return sum;
}







int main()
{
	int tmp[5] = {1,4,2,5,3} ;
	vector<int> arr(tmp,tmp+5);

	
	printf("ret : %d\n",sumsubLength(arr));
	return 0;
}


















































