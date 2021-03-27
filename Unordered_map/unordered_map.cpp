#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_map>

using namespace std;




#if(0)
int main()
{

	//unordered_map<int,string> st;
	unordered_map<char,int> st;

	/*
	st ={
			{1,"zhanhgui"},
			{2,"zhouling"},
			{3,"pengfei"},
			{4,"hanchao"},
			{5,"hanchao1"}
		};
	*/
	
	
	string t = "ADBECFEBANC" ;
	st[6] = t ;


	if(st.find(15) == st.end())
	{
		cout << "15 not found" << endl;
	}
	else
	{
		cout << "15 is found" << endl;
	}

	auto it_tmp = st.find(4);
	if(it_tmp != st.end())
	{
		cout << it_tmp->first << endl;
		cout << it_tmp->second << endl;
		it_tmp->second = "zhanghuimei" ;
		cout << it_tmp->second << endl;
	}
	


	/*
	for(auto it = st.begin(); it!=st.end();it++)
	{
		
		cout <<it->first << "  " << it->second << endl;

	}

	*/


	cout << st.size() << endl;


	return 0;
}
#endif


int main()
{
	unordered_map<char,int> st;
	st['L'] = 1;

	return 0;
}




























































