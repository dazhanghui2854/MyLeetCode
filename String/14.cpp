#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>

/*
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

 

示例 1：

输入：strs = ["flower","flow","flight"]
输出："fl"
示例 2：

输入：strs = ["dog","racecar","car"]
输出：""
解释：输入不存在公共前缀。
 

提示：

0 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] 仅由小写英文字母组成

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-common-prefix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;

string  longestCommonstr(vector<string> nums)
{
	int len = nums.size();		

	if(len ==0)
		return "";

	int cols = nums[0].size();		


	string ret = "" ;

	for(int i=0; i < cols;i++)
	{
		int flag = 0;
		char c = nums[0][i] ;		

		for(int j=0;j<len;j++)		
		{
			if(nums[j][i]!=c)
			{
				flag = 1;
			}

		}

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



















































