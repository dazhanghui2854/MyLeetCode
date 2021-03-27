#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>




using namespace std;

/*��������תint*/
int  romatic(string s)
{
	int len = s.size();
	int sum = 0;

	unordered_map<char,int> st;
	st =
	{
		{'I',1},					//,����;
		{'V',5},
		{'X',10},
		{'L',50},
		{'C',100},
		{'D',500},
		{'M',1000}
	};


	/*�����һ�����Ƚϣ�������������������������������ǰ����+����- �����һ������++++++++++++++++++++*/
	for(int i=0;i<len -1 ;i++)
	{
		int tmp = st[s[i]] ;
		int tmp_next = st[s[i+1]] ;

		if(tmp >= tmp_next)
		{
			sum+=tmp ;
		}
		else
		{
			sum-=tmp;
		}	
	}

	sum+=st[s[len -1]] ;
	return sum;
}






int main()
{
	string s = "LVIII" ;

	
	cout << romatic(s) << endl;



	return 0;
}



















































