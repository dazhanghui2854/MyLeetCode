/*
给定一个头结点为 head 的非空单链表，返回链表的中间结点。

如果有两个中间结点，则返回第二个中间结点。

 
*/

    ListNode* middleNode(ListNode* head) 
    {
        ListNode* head1 = head ;
        ListNode* head2 = head ;
        //节点个数
        int count = 0;
        if(head == NULL || head->next==NULL)
            return head;
        while(head1 != NULL)
        {
            count++;
            head1 = head1->next;
        }

        //目标节点的下标
        int TarIndex = count / 2 ;
        //
        for(int i=0 ; i <TarIndex ;i++)
        {
            head2 = head2->next;
        }
        return head2;
    }
