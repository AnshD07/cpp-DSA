// https://www.naukri.com/code360/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=SUBMISSION

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node * getMiddle(Node *head){
    
    // empty list or there is only 1 node
    if(head==NULL || head->next==NULL){
        return head;
    }
    // if there is 2 node
    if(head->next->next == NULL){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;


    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow;
}

int getLength(Node *head){
    int len  = 0 ;
    while(head != NULL){
        head = head -> next;
        len++;
    }
    return len;
}

Node *findMiddle(Node *head) {
   /*
    int len = getLength(head);
    int t =( len / 2);

    for(int i=0 ; i<t ; i++){
        head = head->next;
    }

    return head;
    */



    return getMiddle(head);

    
}

