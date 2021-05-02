/*
给你两个 没有重复元素 的数组 nums1 和 nums2 ，其中nums1 是 nums2 的子集。

请你找出 nums1 中每个元素在 nums2 中的下一个比其大的值。

nums1 中数字 x 的下一个更大元素是指 x 在 nums2 中对应位置的右边的第一个比 x 大的元素。如果不存在，对应位置输出 -1 。

 

示例 1:

输入: nums1 = [4,1,2], nums2 = [1,3,4,2].
输出: [-1,3,-1]
解释:
    对于 num1 中的数字 4 ，你无法在第二个数组中找到下一个更大的数字，因此输出 -1 。
    对于 num1 中的数字 1 ，第二个数组中数字1右边的下一个较大数字是 3 。
    对于 num1 中的数字 2 ，第二个数组中没有下一个更大的数字，因此输出 -1 。
示例 2:

输入: nums1 = [2,4], nums2 = [1,2,3,4].
输出: [3,-1]
解释:
    对于 num1 中的数字 2 ，第二个数组中的下一个较大数字是 3 。
    对于 num1 中的数字 4 ，第二个数组中没有下一个更大的数字，因此输出 -1 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/next-greater-element-i
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>
#include <vector>


using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
{
    int len = nums1.size();
    vector<int> st;
    for(auto tmp : nums1)
    {
        int flag = 0;
        for(int j =0 ; j < nums2.size();j++)
        {
            if(tmp == nums2[j])
            {
                /*在nums2尾部，直接push-1*/
                if(j == nums2.size()-1)
                {
                    st.push_back(-1);
                    break; 
                }
                else
                {
                    /*遍历是否存在目标数*/
                    for(int k=j+1;k< nums2.size();k++)
                    {
                        if(tmp < nums2[k])
                        {
                            st.push_back(nums2[k]);
                            /*只能退出当前循环，故需要添加找到目标标志位flag*/
                            flag = 1;
                            break;
                        }   
                    }
                    if(!flag)
                        st.push_back(-1);
                }
            }
        }
    }
    return st;
}


int main()
{
    vector<int> st1 = {4,1,2};
    vector<int> st2 = {1,3,4,2};

    vector<int> ret = nextGreaterElement(st1,st2);

    for(auto tmp : ret)
    {
        cout << tmp << endl;
    }
    return 0;
}