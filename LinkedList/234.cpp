/*
请判断一个链表是否为回文链表。

示例 1:

输入: 1->2
输出: false
示例 2:

输入: 1->2->2->1
输出: true
进阶：
*/

bool isPalindrome(ListNode* head) 
{

    int head_len = 0;
    ListNode* head1 = head ;
    ListNode* head2 = head ;
    //求出链表长度
    while(head1 != NULL)
    {
        head_len++;
        head1= head1->next;
    }
    //创建数组空间
    vector<int> st1(head_len,0);
    
    //将链表中元素填入vector
    int index = 0 ;
    while(head2 != NULL)
    {
        st1[index] = head2->val;
        head2 = head2->next;
        index++;
    }
    /*判断是否为回文数组*/
    for(int i=0 ;i < head_len / 2;i++)
    {
        if(st1[i] != st1[head_len -i -1])
            return false;
    }
    return true;
}