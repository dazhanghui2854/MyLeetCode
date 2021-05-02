#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>

/*
给定一个非空字符串 s，最多删除一个字符。判断是否能成为回文字符串。

示例 1:

输入: "aba"
输出: True
示例 2:

输入: "abca"
输出: True
解释: 你可以删除c字符。
注意:

字符串只包含从 a-z 的小写字母。字符串的最大长度是50000。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-palindrome-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;



bool  huiwen_word(string s )
{
	string tmp = s ;
	reverse(tmp.begin(),tmp.end());
	if(tmp ==s)
		return true;


	for(int i=0;i< s.size() ;i++)
	{
		string tmp1 = s;
		tmp1.erase(i,1);

		cout << "cachu i wei hou : " << tmp1 << endl;
		string tmp2 = tmp1;		

		reverse(tmp2.begin(),tmp2.end());

		cout << "fanzhuan hou : " << tmp2 << endl;
		
		if(tmp2 == tmp1)
			return true;

		
	}

	return false;
	
}
	



int main()
{
	
	
	string s = "cbbcc";

	
	cout << huiwen_word(s) << endl;



	return 0;
}



















































