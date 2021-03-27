#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>




using namespace std;

/*罗马数字转int*/
string  longestCommonstr(vector<string> nums)
{
	int len = nums.size();		//串个数

	if(len ==0)
		return "";

	int cols = nums[0].size();		//列


	string ret = "" ;

	for(int i=0; i < cols;i++)
	{
		int flag = 0;
		char c = nums[0][i] ;		//要比较的列字符

		for(int j=0;j<len;j++)		//串个数
		{
			if(nums[j][i]!=c)
			{
				flag = 1;
			}

		}
		/*遍历完成*/
		if(flag ==0)
		{
			ret.push_back(c);
		}
		else if(flag ==1)
		{
			return ret;
		}
	}
	return ret;
}
	



int main()
{
	//vector<string> strs = {"flower","flow","flight"} ;
	//vector<string> strs = {"flower","flow","floight"} ;
	vector<string> strs = {"dog","flow","car"} ;


	string ret = longestCommonstr(strs);
	
	cout << ret << endl;



	return 0;
}



















































