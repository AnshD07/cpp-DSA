// https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

struct Node* reverseDLL(struct Node * head)
{
    
    struct Node* prev = NULL;
    
    while(head != NULL){
        // save the next node
        struct Node *next_node = head->next;
        
        
        // reverse the pointers
        head->next = prev;
        head->prev = next_node;
        
        
        // move both to the next node
        prev = head;
        head =  next_node;
    }
    
    return prev;
}
