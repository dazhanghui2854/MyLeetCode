/*
存在一个按升序排列的链表，给你这个链表的头节点 head ，请你删除所有重复的元素，使每个元素 只出现一次 。

返回同样按升序排列的结果链表。

 

示例 1：


输入：head = [1,1,2]
输出：[1,2]
示例 2：


输入：head = [1,1,2,3,3]
输出：[1,2,3]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


ListNode* deleteDuplicates(ListNode* head) 
{
    ListNode* phead = head ;
    //空指针直接返回
    if(phead == NULL)
        return NULL ;

    //当前处于倒数第二个节点位置
    while(phead->next != NULL)
    {
        if(phead->val == phead->next->val)
        {
            ListNode* tmp = phead->next->next;
            phead->next = tmp;
            //phead = phead->next; 指针不能移动
        }
        else
            phead = phead->next;
    }
    return head;
}
