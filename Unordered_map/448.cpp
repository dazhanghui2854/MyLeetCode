#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>


using namespace std;


/*
给定一个范围在  1 ≤ a[i] ≤ n ( n = 数组大小 ) 的 整型数组，数组中的元素一些出现了两次，另一些只出现一次。

找到所有在 [1, n] 范围之间没有出现在数组中的数字。

您能在不使用额外空间且时间复杂度为O(n)的情况下完成这个任务吗? 你可以假定返回的数组不算在额外空间内。

示例:

输入:
[4,3,2,7,8,2,3,1]

输出:
[5,6]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


vector<int> losenumber(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	vector<int> ret;

	unordered_map<int,int> st;

	for(int i=0;i < len ;i++)
	{

		tmp = arr[i] ;
		st[tmp]++ ;
	}

	for(int i=1;i <= len ;i++)
	{

		if(st.count(i) ==0)			
		{
			ret.push_back(i);
		}
	}

	return ret;

}






int main()
{


	int tmp[8] ={1,2,2,3,3,5,6,7} ;

	vector<int> arr(tmp,tmp+8);

	vector<int> ret = losenumber(arr);

	int len = ret.size();

	for(int i=0 ; i < len;i++)

	{
		printf("%d\n",ret[i]);
	}



	return 0;
}





























































