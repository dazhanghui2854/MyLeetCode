#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;


/*�ַ������һ�� ���ʳ���*/

int  isValid(string s)
{
	int len = s.size();
	

	if(len == 0)
		return 0;

	int count = 0;



	/*������λ�ñ���*/
	for(int i=len -1;i>= 0;i--)
	{
		if(s[i]!=' ')
		{
			count++;
		}
		else
		{
			if(count > 0)								//�����ʼ��Ϊ�ո� ����Ҫ������ǰ����������
				return count;
		}

	}
	
	return count;
}
	



int main()
{
	
	
	string s = "a ";
	int ret = isValid(s);
	
	cout << ret << endl;



	return 0;
}



















































