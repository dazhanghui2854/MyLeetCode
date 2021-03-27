#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;


/*翻转前2k长度中前k长度的单词*/

string  isValid(string s , int k)
{
	int len = s.size();

	int nums = len / (2 * k) ;
	int left = len % (2 * k) ;

	for(int i =0 ; i< nums ;i++)
	{
		int left = i*2*k ;
		int right = i*2*k + k - 1;

		reverse(s.begin()+left,s.begin()+right+1);
	}

	if(left == 0)
		return s;
	else if(left <= k)
	{
		reverse(s.begin()+nums*2*k,s.end());
		return s;
	}
	else if(left >k)
	{
		reverse(s.begin()+nums*2*k,s.begin()+nums*2*k + k);
		return s ;
	}
	return s;
	
}
	



int main()
{
	
	
	string s = "abcdefg";
	string  ret = isValid(s,2);
	
	cout << ret << endl;



	return 0;
}



















































