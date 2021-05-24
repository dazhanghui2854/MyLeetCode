#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>

/*
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

 

示例：

输入："Let's take LeetCode contest"
输出："s'teL ekat edoCteeL tsetnoc"
 

提示：

在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-words-in-a-string-iii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/


using namespace std;



string reverseWords(string s) 
{
	int len = s.size();
	if(len == 0 || len ==1)
		return s;

	int left = 0;
	int right = 0;

	/*左边界为每次计算完整字符串的起点*/
	while(left < len)
	{
		if(s[left]!=' ')
		{
			/*初始化起点*/
			right = left;
			//&& right < len 一定别忘了
			while(s[right]!=' ' && right < len)
			{
				right++;
			}
			/*此时right已为' '*/
			reverse(s.begin()+left,s.begin()+right);
			/*重置滑动窗口起始位置*/
			left = right;
		}
		else
		{
			left++;
		}
	}
	return s;
}

	



int main()
{
	
	
	string s = "zhang hui ha ha";
	
	
	cout << reverseWords(s) << endl;



	return 0;
}


















































