#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <map>
/*
示例 1：

输入：[3, 2, 1]
输出：1
解释：第三大的数是 1 。
示例 2：

输入：[1, 2]
输出：2
解释：第三大的数不存在, 所以返回最大的数 2 。
示例 3：

输入：[2, 2, 3, 1]
输出：1
解释：注意，要求返回第三大的数，是指在所有不同数字中排第三大的数。
此例中存在两个值为 2 的数，它们都排第二。在所有不同数字中排第三大的数为 1 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/third-maximum-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

using namespace std;


int thirdMax(vector<int>& nums) 
{
	int len = nums.size();
	map<int,int> st;

	for(auto tmp : nums)
	{
		st[tmp]++;
	}

	if(st.size() < 3)
	{
		auto it = st.end();
		it--;
		return it->first;
	}

	int max = 0;
	int index = 1;
	
	for(auto it= st.rbegin();it!= st.rend();it++)
	{
		int tmp = it->first;
		max = it->first;
		if(index == 3)
			return tmp;

		index++;
	}

	return max;
}




int main()
{
	int tmp[3] = {1,2,3} ;
	vector<int> arr(tmp,tmp+3);




	int ret = third_maxnumber(arr);
	printf("target :%d\n",ret);
	
	return 0;
}


















































