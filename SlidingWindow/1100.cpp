#include <iostream>
#include <unordered_map>


using namespace std;

/*
给你一个字符串?S，找出所有长度为?K?且不含重复字符的子串，请你返回全部满足要求的子串的?数目。

示例 1：

输入：S = "havefunonleetcode", K = 5
输出：6
解释：
这里有 6 个满足题意的子串，分别是：'havef','avefu','vefun','efuno','etcod','tcode'。
示例 2：

输入：S = "home", K = 5
输出：0
解释：
注意：K 可能会大于 S 的长度。在这种情况下，就无法找到任何长度为 K 的子串。
?

提示：

1 <= S.length <= 10^4
S 中的所有字符均为小写英文字母
1 <= K <= 10^4

*/


//固定长度移动 直接平移
int numKLenSubstrNoRepeats(string S, int K) 
{
	int len = S.size();
	if(len < K)
		return 0;

	int ret_num = 0;
	for(int i=0 ;i <= len  -K ;i++)
	{
		/*这两个变量一定要在外，做一次完全统计*/
		int okflag = 1;
		unordered_map<char,int> st;
		
		for(int j=i ;j < i+K;j++)
		{  	 
			char c = S[j];
			st[c]++;
			if(st[c]==2)
			{
				okflag = 0;
				break;
			}	   
		}
		if(okflag == 1)
			ret_num++;
	}
	return ret_num;
}





int main()
{

 //string s = "ccaabbb" ;
 string s = "havefunonleetcode";

 cout << numKLenSubstrNoRepeats(s,5) << endl;




	return 0;
}























































