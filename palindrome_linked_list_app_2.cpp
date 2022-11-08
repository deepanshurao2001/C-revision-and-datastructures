#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
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
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL && fast ->next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}
Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
     next = curr-> next;
     curr -> next = prev;
     prev = curr;
     curr = next;   
    }
    return prev;
}
bool isPalandrome(Node* head){
    if(head-> next == NULL){
        return true;
    }
    Node* middle = getMid(head);
    Node* temp = middle-> next;
    middle-> next = reverse(temp);
    Node* head1 = head;
    Node* head2 = middle-> next;
    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    temp = middle-> next;
    middle -> next = reverse(temp);
    return true;
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
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,1);
    print(head);
    cout<<isPalandrome(head)<<endl;
    print(head);
    return 0;
}
