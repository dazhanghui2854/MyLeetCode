#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


using namespace std;



//删除数组指定元素（原地），返回新长度
int removeElement(vector<int>& arr ,int target)
{
	int len = arr.size();
	int fast = 0;
	int slow = 0;

	int cur = 0;
	for(int fast =0 ;fast < len  ;fast++)						//长一值遍历
	{
		if(arr[fast] != target)									//判断反条件
		{
			arr[slow] = arr[fast];												//短的记录该赋值操作（满足条件）的位置下标
			slow++;
		}
	}
	return slow   		//!!!!!!!!!长度 +1 =长度，  此时index : slow -1 ;
}







int main()
{



	return 0;
}


































































