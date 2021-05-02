#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits.h>


/*
假设你有两个数组，一个长一个短，短的元素均不相同。找到长数组中包含短数组所有的元素的最短子数组，其出现顺序无关紧要。

返回最短子数组的左端点和右端点，如有多个满足条件的子数组，返回左端点最小的一个。若不存在，返回空数组。

示例 1:

输入:
big = [7,5,9,0,2,1,3,5,7,9,1,1,5,8,8,9,7]
small = [1,5,9]
输出: [7,10]
示例 2:

输入:
big = [1,2,3]
small = [4]
输出: []
提示：

big.length <= 100000
1 <= small.length <= 100000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-supersequence-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


using namespace std;


vector<int> shortestSeq(vector<int>& big, vector<int>& small) 
{
    int len = big.size();
    vector<int> res;
    //need
    unordered_map<int, int> need;
	unordered_map<int, int> window;
	//
	int minLen = INT_MAX;
    //
	int okCount = 0;
	
    //
    for (auto& e : small) 
	{
        need[e]++;
    }

    //
    int left = 0;
	int right = 0;
    for (right = 0; right < len; ++right) 
	{
		int tmp = big[right];
		window[tmp]++;
        //
        if (need.find(tmp) != need.end()) 
        {
        	if(need[tmp] == window[tmp])
        	{
				okCount++;
			}
		}

        //
        while (okCount == small.size()) 
		{
			/**/
            if (right - left+1  < minLen) 
			{
                minLen = right - left+1 ;
				/**/
                res = {left, right};
				
            }
			
			int tmp = big[left];
            if (need.find(tmp) != need.end()) 
            {
            	/**/
				if(need[tmp] == window[tmp])
				{
					okCount--;
				}
			}
			/**/
			window[tmp]--;
            left++;
        }
    }
	cout << "len :" << minLen << endl;

    return res;
}




int main()
{

	//vector<int> big = {7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7};
	//vector<int> small = {1, 5, 9};
	vector<int> big = {1,2,3};
	vector<int> small = {1 ,2,3};
	vector<int> ret;
	ret = shortestSeq(big,small);
 	cout << ret[0] << endl;
	cout << ret[1] << endl;


	return 0;
}
























































