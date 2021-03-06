/*
用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的功能。(若队列中没有元素，deleteHead 操作返回 -1 )

 

示例 1：

输入：
["CQueue","appendTail","deleteHead","deleteHead"]
[[],[3],[],[]]
输出：[null,null,3,-1]
示例 2：

输入：
["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
[[],[],[5],[2],[],[]]
输出：[null,-1,null,null,5,2]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/



class CQueue {
public:
    stack<int> st1;
    stack<int> st2;
    CQueue() {

    }
    
    void appendTail(int value) 
    {
        st1.push(value);
    }
    
    int deleteHead() 
    {   
        /*为空直接返回-1*/     
        if(st1.empty())
            return -1;

        /*将st1数据导入st2*/
        while(!st1.empty())
        {
            auto tmp = st1.top();
            st1.pop();
            st2.push(tmp);
        }
        /*栈顶元素pop 记录*/
        auto ret = st2.top();
        st2.pop();
        /*st2压入st1*/
        while(!st2.empty())
        {
            auto tmp = st2.top();
            st2.pop();
            st1.push(tmp);
        }
        return ret;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
