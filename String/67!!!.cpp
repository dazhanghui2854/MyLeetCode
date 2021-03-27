#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;


/*字符串最后一个 单词长度*/

int  isValid(string s)
{
	int len = s.size();
	

	if(len == 0)
		return 0;

	int count = 0;



	/*从最后的位置遍历*/
	for(int i=len -1;i>= 0;i--)
	{
		if(s[i]!=' ')
		{
			count++;
		}
		else
		{
			if(count > 0)								//如果开始就为空格 则需要继续向前遍历！！！
				return count;
		}

	}
	
	return count;
}
	



int main()
{
	
	
	string s = "a ";
	int ret = isValid(s);
	
	cout << ret << endl;



	return 0;
}



















































