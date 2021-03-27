#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;





int main()
{
	string s = "zhanghui,,,heheh" ;
	int i = 2;
	int j = 6;

	cout << s << endl;
	/*·­×ª i - jÎ»*/
	reverse(s.begin()+i , s.begin()+j +1) ;

	cout << s << endl;


	for(auto &c : s)
	{
		c = toupper(c);
	}


	cout << s << endl;

	


	return 0;
}



































