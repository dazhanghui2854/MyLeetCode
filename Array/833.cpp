#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>


using namespace std;



//�ϴ�����λ��
vector<vector<int>> maxproduction(string s)
{
	int len =s.size();
	int left = 0;
	int right = 0;

	vector<vector<int>> st;

	while(left < len)					//��������ѭ��
	{
		right = left ;					//һ��Ҫ�ڴ˸�ֵ
		for(int i=left;i< len;i++)		//����������ֵ
		{
			if(s[i] == s[i+1])
			{
				right++;				//�ƶ���ֵ�±�
			}
			else
			{
				int length = right - left ;
				if(length >= 2)
				{
					st.push_back({left,right}) ;			//��ά���鸳ֵ����������������������
				}
				left = i+1;									//���������������¸�ֵ left;						
				break;
			}
		}
	}
	return st;
}




int main()
{

	string tmp = {"abbcccdddddee"};
	
	vector<vector<int>> st;

	st = maxproduction(tmp);

	int rows = st.size();
	int cols = st[0].size();
	for(int i=0; i < rows;i++)
	{
		for(int j=0; j< cols;j++)
		{
			printf("%d ",st[i][j]);
		}
		printf("\n");
	}


	return 0;
}





























































