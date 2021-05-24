#include <iostream>
#include <unordered_map>


/*
给定一个字符串 s ，找出 至多 包含两个不同字符的最长子串 t ，并返回该子串的长度。

示例 1:

输入: "eceba"
输出: 3
解释: t 是 "ece"，长度为3。
示例 2:

输入: "ccaabbb"
输出: 5
解释: t 是 "aabbb"，长度为5。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-substring-with-at-most-two-distinct-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/




using namespace std;


int lengthOfLongestSubstringTwoDistinct(string s) 
{
    int len = s.size();
    int left = 0;
    int right = 0;
    int ret_len = 0;

    unordered_map<char,int> st;

    for(int left = 0; left < len; left++)
    {
        if(left!=0)
        {
            char cL = s[left -1];
            st[cL]--;					//去除左边界的数
            if(st[cL] == 0)				//判断如果为0了，则从哈希表中删除该键值对
            {
                st.erase(cL);
            }

        }
        while(right < len)
        {
            char cR = s[right];				
            st[cR]++;						//将值插入哈希表中
            if(st.size() <= 2)				//字符种类没超过2种
            {
                right++;			
            }
            else
            {
                //st[cR]--;					
                st.erase(cR);				//删除刚插入的键值对
                break;
            }
        }

        if(right - left > ret_len)			//当前right值不符合条件，长度 = right - 1 -left + 1 = right - left
            ret_len = right - left ;

    }
    return ret_len;
}




int main()
{

 //string s = "ccaabbb" ;
 string s = "eceba" ;

 cout << lengthOfLongestSubstringTwoDistinct(s) << endl;




	return 0;
}























































