#include<iostream>
using namespace std;
class  Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this-> data = data;
        this-> next = NULL;
        
    }
};
void insertNodeAtTail(int d, Node* &head,Node* &tail){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void reverse(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr-> next;
    reverse( head, forward, curr);
    curr-> next = prev;
}
Node* reverseListedList(Node * head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}
int main(){ 
    Node* head = NULL;
    Node* tail = NULL;
    insertNodeAtTail(1,head,tail);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertNodeAtTail(2,head,tail);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertNodeAtTail(3,head,tail);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertNodeAtTail(4,head,tail);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    print(head);
    Node* newList = reverseListedList(head);
    print(newList);
}