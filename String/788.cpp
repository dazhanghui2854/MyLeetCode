#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;



/*判断1-n中有几个好数*/

int	haoshu(int N )
{
	int count = 0;
	for(int i=1;i <= N;i++)
	{
		string s = to_string(i);			//数字转换成字符
		int flag = 1 ;						//开始认为该数为好数
		unordered_map<char,int> st;
		

		/*存在 3 4 7 则不是好数*/
		for(int j=0;j< s.size();j++)
		{
			char c_tmp = s[j];
			if(c_tmp =='3' || c_tmp == '4' || c_tmp == '7')
			{
				flag = 0;
				break;
			}
		}

		/*只有1 0 8 则也不是好数*/
		for(auto c : s)
		{
			st[c]++;
		}

		for(auto it=st.begin();it!=st.end();it++)
		{
			if(it->first!='2' && it->first!='3' && it->first!='4' && it->first!='5' && it->first!='6' && it->first!='7' && it->first!='9')
			{
				flag = 0 ;
				break;
			}
				
		}

		if(flag == 1)
			count++;
		
	}


	return count;
	
}
	
int main()
{
	
	
	

	
	cout << haoshu(10) << endl;



	return 0;
}



















































