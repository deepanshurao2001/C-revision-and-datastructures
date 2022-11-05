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
Node* sortList(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0)
            zeroCount++;
            else if(temp -> data == 1)
            oneCount++;
            else if(temp -> data == 2)
            twoCount++;

            temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp ->data =1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
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
    cout<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail, 0);
    insertAtHead(head,tail, 1);
    insertAtHead(head,tail, 2);
    insertAtHead(head,tail, 0);
    insertAtHead(head,tail, 2);
    insertAtHead(head,tail, 1);
    print(head);
    Node* aftersorting = sortList(head);
    print(aftersorting);
    return 0;
}
