#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;

/*() [] {}*/
bool  isValid(string s)
{
	int len = s.size();

	stack<char> st;
	if(len == 0)
		return true;

	if(len % 2)
		return false;

	for(int i=0;i < len;i++)
	{
		char tmp = s[i];

		if(tmp =='(' || tmp == '[' || tmp =='{')
		{
			st.push(tmp);
		}
		else
		{
			/*cout << st.top() << endl;		空栈调用top函数会返回错误!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
			
			if(st.empty())
				return false;
			if((st.top()=='(' && tmp == ')') || (st.top()=='[' && tmp == ']') || (st.top()=='{' && tmp == '}'))
			{
				st.pop();
			}
			else
			{
				return false;
			}
		}
		
	}
	
	if(st.empty())
		return true;
	else
		return false;
	

}
	



int main()
{
	
	

	string ret = "){" ;
	
	cout << isValid(ret) << endl;



	return 0;
}



















































