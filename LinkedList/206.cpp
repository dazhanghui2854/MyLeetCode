/*
给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
 

示例 1：


输入：head = [1,2,3,4,5]
输出：[5,4,3,2,1]
示例 2：


输入：head = [1,2]
输出：[2,1]
示例 3：

输入：head = []
输出：[]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-linked-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


ListNode* reverseList(ListNode* head) 
{
    //前位置
    ListNode* pre = NULL ;
    //当前节点
    ListNode* cur = head ;

    while(cur!=NULL)
    {   
        
        ListNode* tmp = cur->next;      //临时节点记录cur节点的next
        cur->next = pre;                //翻转
        /*移动pre和cur至新位置*/
        pre = cur;      
        cur = tmp;
    }
    //imp
    return pre;
}