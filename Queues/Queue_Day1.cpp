#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int qfront;
    int rear;  
    public:
    Queue(){
        size = 1000001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    bool isEmpty(){
         if(qfront == rear){
            cout<<qfront<<rear;
            return true;
         }
         else{
            return false;
         }
    }
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue(){
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int front(){
        if(qfront == rear){
            return -1;
        }
        else{
            arr[qfront];
        }
    }
    void print(){
        for(int i=qfront; i<sizeof(arr)-1; i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(11);
    q.print();
    q.dequeue();
    q.print();
     q.dequeue();
    q.print();
     q.dequeue();
    q.print();
     q.dequeue();
    q.print();
     q.dequeue();
    q.print();
     q.dequeue();
    q.print();
     q.dequeue();
    cout<<q.isEmpty();
    return 0;
}