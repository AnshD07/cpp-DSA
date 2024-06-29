// https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644


/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *reverse_in_part(Node *&head,int len,int k){
   
    // base case
    if(head==NULL  ||  len<k){
        return head;
    }

    // step1:  reverse first k Nodes

    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;

    int count = 0;

    while(curr != NULL && count<k){
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;

        count++;
    }

    // step2 : Recursion joy leshe agal nu
    
    len -= k;
    if(forward != NULL){
        head->next = reverse_in_part(forward,len,k);
    }


    // step3 : return head of reverse list
    return prev;

    // see notes for it
}

int getLength(Node *head){
    int len  = 0 ;
    while(head != NULL){
        head = head -> next;
        len++;
    }
    return len;
}

Node* kReverse(Node* head, int k) {
   int len = getLength(head);

   return reverse_in_part(head, len, k);
}