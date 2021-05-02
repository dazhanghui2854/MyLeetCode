#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>

/*
我们称一个数 X 为好数, 如果它的每位数字逐个地被旋转 180 度后，我们仍可以得到一个有效的，且和 X 不同的数。要求每位数字都要被旋转。

如果一个数的每位数字被旋转以后仍然还是一个数字， 则这个数是有效的。0, 1, 和 8 被旋转后仍然是它们自己；2 和 5 可以互相旋转成对方（在这种情况下，它们以不同的方向旋转，换句话说，2 和 5 互为镜像）；6 和 9 同理，除了这些以外其他的数字旋转以后都不再是有效的数字。

现在我们有一个正整数 N, 计算从 1 到 N 中有多少个数 X 是好数？

 

示例：

输入: 10
输出: 4
解释: 
在[1, 10]中有四个好数： 2, 5, 6, 9。
注意 1 和 10 不是好数, 因为他们在旋转之后不变。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotated-digits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;



int	haoshu(int N )
{
	int count = 0;
	for(int i=1;i <= N;i++)
	{
		string s = to_string(i);			//数字转换成字符
		int flag = 1 ;						//开始认为该数为好数
		unordered_map<char,int> st;
		

		for(int j=0;j< s.size();j++)
		{
			char c_tmp = s[j];
			if(c_tmp =='3' || c_tmp == '4' || c_tmp == '7')
			{
				flag = 0;
				break;
			}
		}

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



















































