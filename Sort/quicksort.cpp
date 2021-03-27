#include <iostream>
#include <stdio.h>
#include <vector>


using namespace std;





void quicksort(vector<int>& arr, int L, int R)
{
	/*递归出口*/
	if(L >= R)
		return ;
		
	int len = arr.size();
	if(len == 0 || len == 1)
		return ;

	int base = arr[L];				//左基准选择
	int i = L;
	int j = R;

	while(i < j)								// i, j 不是L ，R
	{
		while(arr[j] >= base && i < j)			//先右后左，i < j！！！
		{
			j--;
		}

		while(arr[i] <= base && i < j)
		{
			i++;
		}

		if(i < j)
		{
			swap(arr[i],arr[j]);
		}
	}

	//L R相遇
	arr[L] = arr[i] ;
	arr[i] = base ;

	quicksort(arr,L,i -1);
	quicksort(arr,i+1,R);

}





int main()
{

	int tmp[9] ={25,14,36,52,18,96,45,44,58};

	vector<int> arr(tmp,tmp+9);

	quicksort(arr,0,8);
	for(int i=0; i< 9;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}

	return 0;
}




















































