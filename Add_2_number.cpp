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
Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void insertAtTail(Node* &head , Node* &tail , int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail -> next = temp;
        tail = temp;
    }
}
Node* add(Node* first , Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL && second != NULL){
        int sum = carry + first->data + second -> data;
        int digit = sum%10;
        Node* temp = new Node(digit);
        insertAtTail(ansHead,ansTail, digit);
        carry = sum/10;
        first = first-> next;
        second = second->next;
    }
    while(first != NULL){
        int sum = carry + first -> data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first-> next;
    }
        while(second != NULL){
        int sum = carry + second -> data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        second = second->next;
    }
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }
    return ansHead;
}
Node* addTwoLists(struct Node* first, struct Node* second){
    first = reverse(first);
    second = reverse(second);
    Node* ans = add(first, second);
    ans = reverse(ans);
    return ans;
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
    Node* list1 = new Node(9);
    Node* head1 = list1;
    Node* tail1 = list1;

    insertAtHead(head1,tail1,7);
    insertAtHead(head1,tail1,5);
    insertAtHead(head1,tail1,3);
    insertAtHead(head1,tail1,2);
    insertAtHead(head1,tail1,1);
    print(head1);
     Node* list2 = new Node(6);
    Node* head2 = list2;
    Node* tail2 = list2;

    insertAtHead(head2,tail2,1);
    insertAtHead(head2,tail2,8);
    insertAtHead(head2,tail2,6);
    insertAtHead(head2,tail2,4);
    insertAtHead(head2,tail2,0);
    print(head2);
    Node* sumoflist = addTwoLists(head1,head2);
    print(sumoflist);
    return 0;
}