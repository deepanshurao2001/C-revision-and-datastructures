#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
};
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
            cout<<temp->data<<endl;
            temp= temp->next;
    }
        cout<<endl;
}
int main(){
    //create a new node
    Node* node1= new Node(4);
    cout<<node1->data << endl;
    cout<< node1->next <<endl;
    //head pointed a node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,52);
    print(head);
    insertAtTail(tail,552);
    print(head);
    insertAtTail(tail,572);
    print(head);
    return 0;
}