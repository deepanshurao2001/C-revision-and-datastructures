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
Node* getMiddle(Node* head){
    if(head == NULL || head ->next == NULL)
        return head;

if(head->next->next  == NULL){
    return head-> next;
}
    Node* slow = head;
    Node* fast = head-> next;
    while(fast != NULL){
        fast = fast-> next;
        if(fast != NULL){
            fast = fast-> next;
        }
        slow = slow-> next;
    }
    return slow;
}
Node* findMiddle(Node* head){
    return getMiddle(head);
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    insertNodeAtTail(7,head,tail);
    print(head);
    cout<<"Middle of linked list is:"<<getMiddle(head)-> data<<endl;}