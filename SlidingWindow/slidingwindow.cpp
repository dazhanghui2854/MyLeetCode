#include <iostream>
#include <stdio.h>
#include <map>
#include <unordered_map>
#include <string>
#include <limits.h>


using namespace std;



string SlidingWindow(string s, string t)
{
	unordered_map<char,int> need, window ;

	//目标串赋值在哈希表中
	for(char c : t)
		need[c]++;

		
	int left = 0;
	int right = 0;
	int valid = 0;
	

	//最小子串的起始索引及长度
	int start = 0; 
	int targetlen = INT_MAX;
	while(right < s.size())
	{
		char c = s[right] ;			//窗口第一个值
		right++;

		//进行窗口内一系列数据更新
		if(need.count(c))		//该字符在 need中存在 (只可能为0 | 1)
		{
			window[c]++;
			if(window[c] == need[c])		//窗口该字符个数和 需要的一致
			{
				valid++;
			}
		}


		//判断valid是否满足条件 收缩左窗口

		while(valid == need.size())   //当前窗口已经满足 目标个数，键的种类数量
		{
			//更新最小覆盖串的起始位置 及长度，必须在满足条件情况写下起始位置和长度
			if(right - left < targetlen)
			{
				start = left ;
				targetlen = right - left ;
			}
			
			//d 将移除的字符
			char d = s[left];
			left++;

			//进行窗口内一系列数据更新
			if(need.count(d))			//如果删除的该字符是目标字符
			{
				if(window[d] == need[d])			//如果当前该字符处于饱和状态，valid--
				{
					valid--;
				}
				window[d]--;			//必做
			}
		}	
	}
	
	return targetlen == INT_MAX ?  "" : s.substr(start,targetlen);
}


string SlidingWindow(string s, string t)
{
	unordered_map<char,int> need, window ;

	//目标串赋值在哈希表中
	for(char c : t)
		need[c]++;

		
	int left = 0;
	int right = 0;
	int valid = 0;
	

	//最小子串的起始索引及长度
	int start = 0; 
	int targetlen = INT_MAX;
	for(int right = 0 ; right < s.size();right++)
	{

		char c = s[right] ;
		right++;

		//进行窗口内一系列数据更新
		if(need.count(c))		//该字符在 need中存在 (只可能为0 | 1)
		{
			window[c]++;
			if(window[c] == need[c])		//窗口该字符个数和 需要的一致
			{
				valid++;
			}
		}


		//判断valid是否满足条件 收缩左窗口

		while(valid == need.size())   //当前窗口已经满足 目标个数，键的种类数量
		{
			//更新最小覆盖串的起始位置 及长度，必须在满足条件情况写下起始位置和长度
			if(right - left < targetlen)
			{
				start = left ;
				targetlen = right - left ;
			}
			
			//d 将移除的字符
			char d = s[left];
			left++;

			//进行窗口内一系列数据更新
			if(need.count(d))			//如果删除的该字符是目标字符
			{
				if(window[d] == need[d])			//如果当前该字符处于饱和状态，valid--
				{
					valid--;
				}
				window[d]--;			//必做
			}
		}	
	}
	
	return targetlen == INT_MAX ?  "" : s.substr(start,targetlen);
}





int main()
{

	string A = "ADBECFEBANC" ;
	string B = "ABBC" ;

	string ret = SlidingWindow(A,B);



	cout << "ret:" << ret << endl;

	return 0;
}

















































