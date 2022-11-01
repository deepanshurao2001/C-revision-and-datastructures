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
Node* Kreverse(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    while( curr != NULL && count < k){
        next = curr -> next;
        curr-> next = prev ;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head->next = Kreverse(next,k);
    }
    return prev;
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
    Node* newNode = Kreverse(head, 2);
    print(newNode);

}