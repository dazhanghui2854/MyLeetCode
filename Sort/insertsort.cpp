#include <iostream>
#include <stdio.h>
#include <vector>


using namespace std;





void insertsort(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	/*i j 必须单独列出*/
	int i;
	int j;
	for(i =1;i<len;i++)			//待插入位置
	{
		tmp = arr[i];
		for(j = i -1 ;tmp < arr[j] && j>=0 ;j--)
		{
			arr[j+1] = arr[j];		
		}
		arr[j+1] = tmp;			//假设没动过,则该插在i位置 i=j+1
	}
}




int main()
{
	int tmp[9] = {25,3,96,45,78,52,22,33,258};
	vector<int> arr(tmp,tmp+9);
	
	
	insertsort(arr);
	for(int i=0;i < 9;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	
	return 0;
}
































