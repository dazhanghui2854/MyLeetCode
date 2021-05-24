#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>

/*

给定一个字符串 s 和一个整数 k，你需要对从字符串开头算起的每隔 2k 个字符的前 k 个字符进行反转。

如果剩余字符少于 k 个，则将剩余字符全部反转。
如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
 

示例:

输入: s = "abcdefg", k = 2
输出: "bacdfeg"
 

提示：

该字符串只包含小写英文字母。
给定字符串的长度和 k 在 [1, 10000] 范围内。
*/


using namespace std;




string reverseStr(string s, int k) 
{
	int len = s.size();

	//每次移动2*k位置
	for(int i=0 ;i < len;i+=2*k)
	{
		if(i+k <= len)
		{
			reverse(s.begin()+i,s.begin()+i+k);
		}
		else
		{
			reverse(s.begin()+i,s.begin()+s.size());
		}

	}
	
	return s;
}

/*
string  isValid(string s , int k)
{
	int len = s.size();

	int nums = len / (2 * k) ;
	int left = len % (2 * k) ;

	for(int i =0 ; i< nums ;i++)
	{
		int left = i*2*k ;
		int right = i*2*k + k - 1;

		reverse(s.begin()+left,s.begin()+right+1);
	}

	if(left == 0)
		return s;
	else if(left <= k)
	{
		reverse(s.begin()+nums*2*k,s.end());
		return s;
	}
	else if(left >k)
	{
		reverse(s.begin()+nums*2*k,s.begin()+nums*2*k + k);
		return s ;
	}
	return s;
	
}
*/



int main()
{
	
	
	string s = "abcdefg";
	string  ret = isValid(s,2);
	
	cout << ret << endl;



	return 0;
}



















































