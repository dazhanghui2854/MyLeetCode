#include <iostream>
#include <unordered_map>




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
                st[cR]--;					//删除刚插入的键值对
                st.erase(cR);
                break;
            }
        }

        if(right - left > ret_len)
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























































