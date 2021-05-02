#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <map>




using namespace std;

/*
爱丽丝有一手（hand）由整数数组给定的牌。 

现在她想把牌重新排列成组，使得每个组的大小都是 W，且由 W 张连续的牌组成。

如果她可以完成分组就返回 true，否则返回 false。

 

注意：此题目与 1296 重复：https://leetcode-cn.com/problems/divide-array-in-sets-of-k-consecutive-numbers/

 

示例 1：

输入：hand = [1,2,3,6,2,3,4,7,8], W = 3
输出：true
解释：爱丽丝的手牌可以被重新排列为 [1,2,3]，[2,3,4]，[6,7,8]。
示例 2：

输入：hand = [1,2,3,4,5], W = 4
输出：false
解释：爱丽丝的手牌无法被重新排列成几个大小为 4 的组。
 

提示：

1 <= hand.length <= 10000
0 <= hand[i] <= 10^9
1 <= W <= hand.length
通过次数7,475提交次数14,72

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/hand-of-straights
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/



bool isNStraightHand(vector<int>& hand, int W) 
{
	bool ret = true;
	int len = hand.size();
	/**/
	if(len % W)
		return false;

	/**/
	int loopCount = len / W ;
	map<int,int> st;
	for(int t : hand)
	{
		st[t]++;
	}

	for(int i=0 ;i < loopCount;i++)
	{
		/**/
		auto it = st.begin();
		int tmp = it->first;
		/**/
		for(int j=1;j <W;j++)
		{
			if(st[tmp+j]==0)
				return false;
		}
		/**/
		for(int j=0;j <W;j++)
		{
			st[tmp+j]--;
			if(st[tmp+j] == 0)
			{
				st.erase(tmp+j);
			}
		}
	}
	return ret;
}






int main()
{
	vector<int> st = {1,2,3,6,2,3,4,7,8} ;

	
	cout << isNStraightHand(st,3) << endl;



	return 0;
}



















































