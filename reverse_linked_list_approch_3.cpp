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
Node* reverse1(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* chotahead = reverse1(head-> next);
    head -> next -> next = head;
    head -> next =NULL;
    return chotahead;
}
Node* reverseLinkedList(Node* head){
    return reverse1(head);
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
    Node* newList = reverseLinkedList(head);
    print(newList);
}