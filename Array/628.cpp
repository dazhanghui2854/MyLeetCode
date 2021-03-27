#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



//三个数的最大乘机
int maxproduction(vector<int>& arr)
{
	int len = arr.size();

	sort(arr.begin(),arr.end());
	
	int tmp1 = arr[len -1] * arr[len - 2] * arr[len - 3] ;  //全正或者全负！！！
	int tmp2 = arr[0] * arr[1] * arr[len -1] ;				//两负数（绝对值最大）一正（最大）

	return max(tmp1,tmp2);

}




int main()
{

	int tmp[3] = {-1,-2,-3};
	vector<int> arr(tmp,tmp+3);

	printf("max : %d\n",maxproduction(arr));


	return 0;
}





























































