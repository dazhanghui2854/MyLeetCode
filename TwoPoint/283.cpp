#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>


using namespace std;



//将数组中的0全部放入最后，前面数组保持相对顺序不变
void move_distance(vector<string>& arr )
{
	int len = arr.size();

	int first = 0;
	int second = 0;

	for(int first = 0; first < len;first++)
	{
		if(arr[first] !=0)
		{
			arr[second] = arr[first];
			second++;
		}
	}

	/*后面坐标都赋值为*/
	for(int j = second ; j < len ; j++)
	{
		arr[j] = 0;
	}
	

}




int main()
{



	return 0;
}


































































