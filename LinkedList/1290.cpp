/*
给你一个单链表的引用结点 head。链表中每个结点的值不是 0 就是 1。已知此链表是一个整数数字的二进制表示形式。

请你返回该链表所表示数字的 十进制值 。

 

示例 1：



输入：head = [1,0,1]
输出：5
解释：二进制数 (101) 转化为十进制数 (5)
示例 2：

输入：head = [0]
输出：0
示例 3：

输入：head = [1]
输出：1
示例 4：

输入：head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
输出：18880

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


int getDecimalValue(ListNode* head) 
{
    ListNode * head1 = head;
    ListNode * head2 = head;
    //先计算出链表长度
    int len = 0;
    while(head1 != NULL)
    {
        len++;
        head1 = head1->next;
    }

    int sum = 0;
    //依次遍历链表，将每位*对应2的次幂 并求和
    for(int i=0;i < len;i++)
    {
        int tmp = head2->val;
        sum+= tmp * pow(2,len - i - 1);
        head2 = head2->next;
    }
    return sum;
}

