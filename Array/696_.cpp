#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;

/*
给定一个字符串 s，计算具有相同数量 0 和 1 的非空（连续）子字符串的数量，并且这些子字符串中的所有 0 和所有 1 都是连续的。

重复出现的子串要计算它们出现的次数。

 

示例 1 :

输入: "00110011"
输出: 6
解释: 有6个子串具有相同数量的连续1和0：“0011”，“01”，“1100”，“10”，“0011” 和 “01”。

请注意，一些重复出现的子串要计算它们出现的次数。

另外，“00110011”不是有效的子串，因为所有的0（和1）没有组合在一起。
示例 2 :

输入: "10101"
输出: 4
解释: 有4个子串：“10”，“01”，“10”，“01”，它们具有相同数量的连续1和0。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/count-binary-substrings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/

int countBinarySubstrings(string s) 
{
	vector<int> st;
	int len = s.size();
	int index = 0;

	while(index < len)
	{
		char c = s[index];
		int count = 0;
		while(c == s[index] && index < len)
		{
			count++;
			index++;
		}
		/*将当次计算完成数push ,vector push_back*/
		st.push_back(count);
	}

	int ret = 0;
 	/*计算 len - 1次*/
	for (int i = 0; i < st.size() - 1; ++i) 
	{
		ret += min(st[i], st[i + 1]);
	}
	return ret;
}

	



int main()
{
	string s = "00110011" ;
	cout << countBinarySubstrings(s) << endl;
	return 0;
}



















































