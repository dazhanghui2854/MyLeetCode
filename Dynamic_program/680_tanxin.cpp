#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;



/*��ɾ��һλ�ַ� �ж��ǲ��ǻ����ַ���ǿ��*/

bool  huiwen_word(string s )
{
	string tmp = s ;
	reverse(tmp.begin(),tmp.end());
	if(tmp ==s)
		return true;


	for(int i=0;i< s.size() ;i++)
	{
		string tmp1 = s;
		tmp1.erase(i,1);

		cout << "cachu i wei hou : " << tmp1 << endl;
		string tmp2 = tmp1;				//ȥ��1λ�����

		reverse(tmp2.begin(),tmp2.end());

		cout << "fanzhuan hou : " << tmp2 << endl;
		
		if(tmp2 == tmp1)
			return true;

		
	}

	return false;
	
}
	



int main()
{
	
	
	string s = "cbbcc";

	
	cout << huiwen_word(s) << endl;



	return 0;
}



















































