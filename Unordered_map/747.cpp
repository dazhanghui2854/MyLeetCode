#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <map>




using namespace std;


//�Ƿ���� ����max���������ֵ����� �з���Index �޷���-1
int isdoubleLength(vector<int>& arr)
{
	int len = arr.size();

	//�ҵ����Ԫ�ص��±�
	int index = 0;
	int max_tmp = arr[0];
	for(int i=0;i < len ;i++)
	{
		if(arr[i] > max_tmp)
		{
			max_tmp = arr[i];
			index = i ;
		}	
	}

	/*����map��*/
	map<int,int> st;
	for(int i=0 ;i < len;i++)
	{
		int tmp = arr[i] ;
		st[tmp]++;
	}

	auto it_max = st.end();	
	it_max--;							//map��������һ��Ԫ�أ���end()    ---

	int max = it_max->first;


	auto it_sec_max = --it_max;			//--֮�����
	int sec_max = it_sec_max->first;


	if(max >= 2 * sec_max)
		return index;

	return -1;;
}





int main()
{
	int tmp[7] = {1,2,2,3,1,10,2} ;
	vector<int> arr(tmp,tmp+7);

	
	printf("ret : %d\n",isdoubleLength(arr));
	return 0;
}


















































