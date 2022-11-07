#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        if(next != NULL){
                delete next;
             
        }
    }
};
void insertAtHead(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    
    }
    else{
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
    }
}
Node* solve(Node* first, Node* second) {
    if(first->next == NULL){
        first-> next = second;
    }
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            curr1 = next1;
            next1 = next1 -> next;
            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
        
        
    }
    
    return first;
}

Node* sortTwoLists(Node* first, Node* second)
{
    if(first == NULL)
        return second;
    
    if(second == NULL)
        return first;
    
    if(first -> data <= second -> data ){
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
    
    
}
void print(Node* head){
    if(head == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    Node* list1 = new Node(9);
    Node* head1 = list1;
    Node* tail1 = list1;

    insertAtHead(head1,tail1,7);
    insertAtHead(head1,tail1,5);
    insertAtHead(head1,tail1,3);
    insertAtHead(head1,tail1,2);
    insertAtHead(head1,tail1,1);
    print(head1);
     Node* list2 = new Node(14);
    Node* head2 = list2;
    Node* tail2 = list2;

    insertAtHead(head2,tail2,12);
    insertAtHead(head2,tail2,8);
    insertAtHead(head2,tail2,6);
    insertAtHead(head2,tail2,4);
    insertAtHead(head2,tail2,0);
    print(head2);

    Node* newlist = sortTwoLists(head1,head2);
    print(newlist);
       /* Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail, 0);
    insertAtHead(head,tail, 1);
    insertAtHead(head,tail, 2);
    insertAtHead(head,tail, 0);
    insertAtHead(head,tail, 2);
    insertAtHead(head,tail, 1);
    print(head);
    sortList(head);
    print(head);*/
    return 0;
}