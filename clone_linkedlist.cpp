#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next ;
        Node* random ;
        Node(int d){
             data = d;
            next= NULL;
            random = NULL;
        }

};
void print(Node* head){
    if(head == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        cout<<"_"<<temp->random->data<<"_     ";
        temp = temp -> next;
    }
    cout<<endl;
}
void insertAtTail(Node* &head, Node* &tail, int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail -> next = newNode;
        tail = newNode;
    }
}
Node* copyList(Node* head){
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail ,temp->data);
        temp = temp -> next;
    }
        unordered_map<Node* , Node*> oldToNewNode;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL){
            cloneNode -> random = oldToNewNode[originalNode -> random];
            originalNode = originalNode-> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
}
int main(){
    Node* node1 =   new Node(1);
    Node* head = node1; 
    Node* node2 =   new Node(2);
    Node* node3 =   new Node(3);
    Node* node4 =   new Node(4);
    Node* node5 =   new Node(5);
    node1-> next = node2;
    node1->random = node3;
    node2-> next = node3;
    node2->random = node1;
    node3-> next = node4;
    node3->random = node5;
    node4->random = node3;
    node4-> next = node5;
    node5->random = node2;
    print(head); 
    Node* clone = copyList(head);
    print(clone);

    return 0;
}
