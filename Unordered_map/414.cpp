#include <iostream>
#include <algorithm>
#include <numeric>					//importent
#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <map>

/*
给你一个非空数组，返回此数组中 第三大的数 。如果不存在，则返回数组中最大的数。

 

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


//���ص������������������ڷ�������
int third_maxnumber(vector<int>& arr)
{
	int len = arr.size();
	int index= 0;
	int tmp = 0;
	map<int,int> st;


	for(int i=0 ;i < len ;i++)
	{
		tmp = arr[i];
		st[tmp]++;
	}
	
	auto it1 = st.begin();
	auto it2 = st.end();

	
	if(st.size() < 3)
	{
		it2--;					//--后才是最好一个元素的位置
		return it2->first;
	}	
	else
	{
		it2--;					//迭代器只能如此运算
		it2--;
		it2--;
		return it2->first;
	}	

}




int main()
{
	int tmp[3] = {1,2,3} ;
	vector<int> arr(tmp,tmp+3);




	int ret = third_maxnumber(arr);
	printf("target :%d\n",ret);
	
	return 0;
}


















































