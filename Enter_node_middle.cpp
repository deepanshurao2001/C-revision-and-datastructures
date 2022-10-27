#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node wit data"<<value<<endl;
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
void insertInPosition(Node* &tail,Node* &head,int position,int d){
    if(position == 1){
        insertAtHead(head ,d);
        return;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp -> next = nodeToInsert;
}
void delectNodebypostion(int position,Node* &head,Node* &tail){
    // deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp-> next = NULL;
        delete temp;
    } 
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev-> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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
    Node* node1= new Node(4);
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
    insertInPosition(tail,head,3,69);
    print(head);
    insertInPosition(tail,head,1,41);
    print(head);
    insertInPosition(tail,head,8,77);
    print(head);
    cout<<"Head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    delectNodebypostion(1,head,tail);
    print(head);
    delectNodebypostion(7,head,tail);
    print(head);
    cout<<"Tail:"<<tail->data<<endl;
    return 0;
}