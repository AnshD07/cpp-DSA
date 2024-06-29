#include <iostream>
using namespace std;

class Node
{
public:
     int data;
     Node *next; // Node type no j address store krshe ne bhai

     // Constructer
     Node(int data)
     {
          this->data = data;
          this->next = NULL; // next node is null
     }

     // Destructer
     ~Node()
     {
          int value = this->data;

          // Memory free
          if (this->next != NULL)
          {
               delete next; // when we delete memory in heap then destucter again call okay
               this->next = NULL;
          }

          cout << "          Memory is free for the node with data : " << value << endl;
     }
};

void insertAtHead(Node *&head, int d)
{

     // New node create kri nakhi
     Node *temp = new Node(d);
     temp->next = head;
     head = temp;
}

void insertAtTail(Node *&tail, int d)
{
     Node *temp = new Node(d);
     tail->next = temp;
     tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

     // inserting at first position
     if (position == 1)
     {
          insertAtHead(head, d);
          return;
     }

     Node *temp = head;
     int cnt = 1;
     while (cnt < position - 1)
     {
          temp = temp->next;
          cnt++;
     }

     // inserting at last position
     if (temp->next == NULL)
     {
          insertAtTail(tail, d);
          return;
     }

     // creating Node for d
     Node *Nodetoinsert = new Node(d);

     Nodetoinsert->next = temp->next; // Nodetoinsert na bija box ma temp na next to address nakhi didho
     temp->next = Nodetoinsert;
}

void print(Node *&head)
{
     Node *temp = head;

     while (temp != NULL)
     {
          cout << temp->data << " ";
          temp = temp->next;
          // going to the next node
     }
     cout << endl;
}

void deleteNode(Node* &tail,Node *&head, int element)
{

     // deleting first node
     if (element == head->data)
     {

          Node *temp = head;
          head = head->next;
          // memory free

          temp->next = NULL;
          delete temp;
          // when we delete heap memory class then it automatically call destructer of class
     }
     else
     { // deleting any middle node and last node

          Node *curr = head;
          Node *prev = NULL;

          while (curr->data != element)
          {
               prev = curr;
               curr = curr->next;
          }

          if(curr->next == NULL){
               tail = prev;
          }

          prev->next = curr->next;

          // memory free to kravi ne bhai
          curr->next = NULL;

          
          delete curr;

          
     }
}

int main()
{

     Node *node1 = new Node(6);

     // node1->data = 4;
     // (*node1).data = 4;  // this is also appliable
     // cout << node1->data << endl;
     // cout << node1->next << endl;

     Node *head = node1;
     print(head);

     // insertAtHead(head,1200);
     // insertAtHead(head,21);
     // insertAtHead(head,978);

     // print(head);

     Node *tail = node1;
     insertAtTail(tail, 12);
     insertAtTail(tail, 100);

     // this is how we can insert Node in Node list
     insertAtPosition(tail, head, 4, 34);
     insertAtTail(tail, 500);

     print(head);
     deleteNode(tail,head,6);
     print(head);

     cout << "head  -  " << head->data << endl;
     cout << "tail  -  " << tail->data << endl;



     
}
