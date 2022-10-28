#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this-> data= d;
        this-> next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
void insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr= tail;
        while(curr-> data != element){
            curr = curr-> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr->next = temp;

    }
}
void deleteNode(int value,Node* &tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data != value){
        prev = curr;
        curr = curr-> next;
    }
    prev-> next = curr-> next;
    // 1 node link list
    if(curr == prev){
        tail = NULL;
    }
    else if(tail == curr){
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;
    }
}
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }

    do{
        cout<<tail-> data<<" ";
        tail= tail->next;
    }while(tail!= temp);  
    cout<<endl;  
}
int main(){

    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    deleteNode(3,tail);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,5,8);
    print(tail);
    insertNode(tail,5,9);
    print(tail);
    deleteNode(5, tail);
    print(tail);
    return 0;
}