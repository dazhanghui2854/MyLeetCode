#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>


using namespace std;



//�������е�0ȫ���������ǰ�����鱣�����˳�򲻱�
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

	/*�������궼��ֵΪ*/
	for(int j = second ; j < len ; j++)
	{
		arr[j] = 0;
	}
	

}




int main()
{



	return 0;
}


































































