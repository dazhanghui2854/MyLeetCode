#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>




using namespace std;


//��������С�ȵ� ���������,����Ķ�
int shortestLength(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	int flag = 0;

	int max = 0;
	int max_num = 0;
	
	unordered_map<int,int> st;
	vector<int> st1 ;
	int ret = len;
	
	
	for(int i = 0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++ ;
	}
	/*1���ҵ��������Ƕ���*/
	for(auto it = st.begin(); it!=st.end();it++)
	{
		if(it->second > max)
		{
			max = it->second ;
		}
	}
	/*2��������1��������ȫ�ҵ���push_back�������У��Ա����ʹ��*/
	for(auto it = st.begin(); it!=st.end();it++)
	{
		if(it->second == max)
		{
			st1.push_back(it->first);
		}
	}
	
	for(auto it = st1.begin(); it!=st1.end();it++)
	{
		max_num = *it ;							//������������������Ԫ��
		int index1 = 0;		//��ʼ����
		int index2 = 0;		//��������
		for(int j=0; j < len;j++)
		{
			if(flag == 0)
			{
				if(arr[j] == max_num)
				{
					index1 = j;
					flag = 1;
				}
			}
			if(arr[j] == max_num)
			{
				index2 = j;
			}	
		}
		if(ret > index2 - index1 + 1)
		{
			ret = index2 - index1 + 1 ;
		}

	}

	return ret;
}





int main()
{
	int tmp[7] = {1,2,2,3,1,4,2} ;
	vector<int> arr(tmp,tmp+7);

	
	printf("ret : %d\n",shortestLength(arr));
	return 0;
}


















































