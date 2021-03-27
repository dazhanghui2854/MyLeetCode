#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>




using namespace std;


//机器人能否回到原点
bool  shortestLength(string       s)
{
	unordered_map<char,int> st;
	for(auto c : s)
	{
		st[c]++;
	}

	if(st['L'!=st['R']])
		return false;

	if(st['U']!=st['D'])
		return false;


	return true;
}





int main()
{
	string s = "LLRRUD";
	cout << shortestLength(s) << endl;
}


















































