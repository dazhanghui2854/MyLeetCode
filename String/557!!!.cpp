#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;


/*翻转字符串中所有单词*/

string  reverse_word(string s )
{
	int len = s.size();
	int left = 0;
	int right = 0;

	for(int i=0; i< len;i++)
	{
		char tmp = s[i] ;
		if(tmp !=' ')
		{
			left = right ;
			for(int j=i+1;j <len;j++)
			{
				if(s[j] !=' ' )
				{
					right++
				}
				else
				{
					break;
				}
			}
			reverse(s.begin()+left,s.end()+right+1);
		}
	}
	
}
	



int main()
{
	
	
	string s = "abcdefg";
	string  ret = isValid(s,2);
	
	cout << ret << endl;



	return 0;
}



















































