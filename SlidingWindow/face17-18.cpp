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
*/


using namespace std;


vector<int> shortestSeq(vector<int>& big, vector<int>& small) 
{
    int len = big.size();
    vector<int> res;
    //need：记录滑动窗口内需要覆盖的数字，及其对应的个数
    unordered_map<int, int> need;
	unordered_map<int, int> window;
	//预设满足条件的最小长度,用最大值，避免 big长度与small长度一致导致不赋值
	int minLen = INT_MAX;
    // 满足条件个数
	int okCount = 0;
	
    // 数据预处理：统计需要覆盖的字符有多少个
    for (auto& e : small) 
	{
        need[e]++;
    }

    // 滑动窗口：l指向窗口左边界，r指向窗口右边界
    int left = 0;
	int right = 0;
    for (right = 0; right < len; ++right) 
	{
		int tmp = big[right];
		window[tmp]++;
        // need中存在右值&&当前该值的需要的个数=1，diff减一
        if (need.find(tmp) != need.end()) 
        {
        	if(need[tmp] == window[tmp])
        	{
				okCount++;
			}
		}

        // 如果okCount满足条件，收缩左窗口
        while (okCount == small.size()) 
		{
				cout << "left :" << left << endl;
				cout << "right :" << right << endl;
			/*先赋值目前满足的left,right,*/
            if (right - left+1  < minLen) 
			{
                minLen = right - left+1 ;
				/*先赋值当前满足条件的暂时值，记住如此赋值方式*/
                res = {left, right};
				
            }
			
			int tmp = big[left];
            if (need.find(tmp) != need.end()) 
            {
            	/*okCount更变*/
				if(need[tmp] == window[tmp])
				{
					okCount--;
				}
			}
			/*一定要执行*/
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
























































