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
                next = NULL;
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
Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;

    //non empty list
    Node* curr = head;

    while(curr != NULL) {

        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }

    return head; 
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
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail, 69);
    insertAtHead(head,tail, 68);
    insertAtHead(head,tail, 67);
    insertAtHead(head,tail, 66);
    insertAtHead(head,tail, 66);
    insertAtHead(head,tail, 65);
    print(head);
    Node* newList = uniqueSortedList(head);
    print(newList);
    return 0;
}
