// https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void reverse(LinkedListNode<int> *&head, LinkedListNode<int> *curr, LinkedListNode<int> *prev)
{
    // base case

    if (curr == NULL)
    {
        head = prev;
        return;
    }

    reverse(head, curr->next, curr); // agale to vdharva khra ne
    curr->next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    /*
        // edge case of empty list or one element list
        if(head == NULL || head->next == NULL){
            return head;
        }



        LinkedListNode<int> *prev = NULL;
        LinkedListNode<int> *curr = head;
        LinkedListNode<int> *forward = NULL;

        while(curr != NULL){
            forward = curr->next;
            curr ->next = prev;


            prev = curr;
            curr = forward;
        }

        return prev;

    */

    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prev = NULL;

    reverse(head, curr, prev);

    return head;
}
