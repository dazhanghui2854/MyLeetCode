#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;



/*�ж�1-n���м�������*/

int	haoshu(int N )
{
	int count = 0;
	for(int i=1;i <= N;i++)
	{
		string s = to_string(i);			//����ת�����ַ�
		int flag = 1 ;						//��ʼ��Ϊ����Ϊ����
		unordered_map<char,int> st;
		

		/*���� 3 4 7 ���Ǻ���*/
		for(int j=0;j< s.size();j++)
		{
			char c_tmp = s[j];
			if(c_tmp =='3' || c_tmp == '4' || c_tmp == '7')
			{
				flag = 0;
				break;
			}
		}

		/*ֻ��1 0 8 ��Ҳ���Ǻ���*/
		for(auto c : s)
		{
			st[c]++;
		}

		for(auto it=st.begin();it!=st.end();it++)
		{
			if(it->first!='2' && it->first!='3' && it->first!='4' && it->first!='5' && it->first!='6' && it->first!='7' && it->first!='9')
			{
				flag = 0 ;
				break;
			}
				
		}

		if(flag == 1)
			count++;
		
	}


	return count;
	
}
	
int main()
{
	
	
	

	
	cout << haoshu(10) << endl;



	return 0;
}



















































