/*
1047. 删除字符串中的所有相邻重复项
给出由小写字母组成的字符串 S，重复项删除操作会选择两个相邻且相同的字母，并删除它们。

在 S 上反复执行重复项删除操作，直到无法继续删除。

在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。

 

示例：

输入："abbaca"
输出："ca"
解释：
例如，在 "abbaca" 中，我们可以删除 "bb" 由于两字母相邻且相同，这是此时唯一可以执行删除操作的重复项。之后我们得到字符串 "aaca"，其中又只有 "aa" 可以执行重复项删除操作，所以最后的字符串为 "ca"。
*/

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string removeDuplicates(string S) 
{
    stack<char> st;
    string ret;
    for(auto c: S)
    {
        /*栈为空直接push*/
        if(st.empty())
            st.push(c);
        else
        {
            /*栈顶元素与当前元素一致，pop栈顶，结束档次循环*/
            if(st.top()==c)
            {
                st.pop();
                continue;
            }
            else    //push压栈
            {
                st.push(c);
            }
        }
    }
    /*取栈中字符串，记得reverse*/
    while(!st.empty())
    {
        ret+=st.top();
        st.pop();
    }
    reverse(ret.begin(),ret.end());
    return ret;
}


int main()
{
    string c = "abbaca";

    string ret = removeDuplicates(c);
    cout << ret << endl;

    return 0;
}