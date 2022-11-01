#include<iostream>
#include<map>
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
void insertAtTail(Node* &tail,Node* &head, int d){
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
bool detectLoop(Node* head){
    if(head == NULL)
    return false;
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] ==true){
            cout<< "present on"<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
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
    insertAtHead(head,tail, 5);
    cout<<"head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
    insertAtTail(tail, head, 66);
    insertAtTail(tail, head, 67);
    insertAtTail(tail, head, 68);
    insertAtTail(tail, head, 69);
    tail->next = head-> next;
    cout<<"head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl; 
    insertAtHead(head,tail, 1);
    cout<<"head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
    insertAtHead(head, tail,2);
    cout<<"head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
    insertAtHead(head, tail,3);
    cout<<"head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
    insertAtHead(head, tail,4);
    if(detectLoop(head)){
        cout<<"Cycle is Present"<<endl;
    }
    else{
        cout<<"Cycle is not Present";
    }
    return 0;
}
