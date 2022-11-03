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
Node* floydDetectLoop(Node* head){
    if(head == NULL)
    return NULL;
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast-> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            cout<<"Present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* getStartingPoint(Node* head){
    if(head == NULL)
    return NULL;
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow-> next;
        intersection = intersection->next;
    }
    return slow;
}
void removeloop(Node* &head){
    if(head == NULL){
        return ;
    }
    Node* startOfLoop =getStartingPoint(head);
    Node* temp = startOfLoop;
    while(temp ->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
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
    if(floydDetectLoop(head) != NULL){
        cout<<"Cycle is Present"<<endl;
    }
    else{
        cout<<"Cycle is not Present";
    }
    Node* startingpoint = getStartingPoint(head);
    cout<<"Node is Starting at :"<<startingpoint->data<<endl;
    removeloop(head);
    print(head);
    return 0;
}
