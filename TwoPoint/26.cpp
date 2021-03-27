#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


using namespace std;



//删除数组重复的元素（原地），返回新长度
int removeElement(vector<int>& arr)
{
	int len = arr.size();
	int fast = 0;
	int slow = 0;

	int cur = 0;
	for(int fast =0 ;fast < len -1 ;fast++)						//长一值遍历
	{
		if(arr[fast] != arr[fast + 1])							//反条件
		{
			slow++;												//短的记录该赋值操作（满足条件）的位置下标
			arr[slow] = arr[fast + 1];
		}
	}
	return slow+1  		//长度 = index+1
}







int main()
{



	return 0;
}


































































