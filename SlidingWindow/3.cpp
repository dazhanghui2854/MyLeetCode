#include <iostream>
#include <string>


using namespace std;







int lengthOfLongestSubstring(string s) 
{
    int len = s.size();
    int ret_max = 0;
    unordered_set<char> st;

    int left = 0;
    int right = 0;					//开始窗口指向第一个

    for(int left = 0; left < len; left++)
    {
        if(left!=0)
        {
            char cL = s[left -1];
            st.erase(cL);      		//擦除出左边界的set值
        }

        /*移动右窗口*/
        while(right < len  ) 		//一直移动右边界
        { 
            char cR = s[right] ;
            if(st.count(cR)==0)
            {
                 st.insert(cR) ; 	//把后面值插入
                 right++;
            }
            else
            {
                break;				//不符合条件，退出while循环
            }
        }

        if(right - left > ret_max)
            ret_max = right - left  ;

    }

    return ret_max;
}



















































