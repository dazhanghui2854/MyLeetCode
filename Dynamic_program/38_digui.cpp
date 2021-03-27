#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;

/*
1
11
21
1212
....
*/


string  isValid(int n)
{

	if(n == 1)
		return "1";

	string tmp_pre = isValid(n -1);
	string ret = "" ;

	int len = tmp_pre.size();

	int count =1;						//数的个数
	for(int i=0;i < len;i++)
	{


		if(tmp_pre[i] == tmp_pre[i+1])
		{
			count++;
		}
		else
		{
			ret+= to_string(count)+tmp_pre[i] ;
			count =1;
		}

	}
	
	return ret;
}
	



int main()
{
	
	

	string ret = isValid(10);
	
	cout << ret << endl;



	return 0;
}



















































