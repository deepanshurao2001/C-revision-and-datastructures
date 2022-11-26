#include<iostream>
using namespace std;
class Circular{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Circular(int n){
        size =n;
        arr = new int[size];
        front = rear = -1;
    }
    bool enqueue(int value){
        cout<<front<<rear<<endl;
        if((front ==0 && rear == size-1) || (rear ==(front -1)%(size-1))){
            cout<<"Queue is full";
            return false;
        }
        else if(front ==-1){
            front = rear = 0;
            arr[rear] = value;
        }
        else if(rear == size-1 && front != 0){
                rear = 0;
                arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }
    int dequeue(){
        cout<<front<<rear<<endl;
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size -1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
     void print(){
        for(int i=front; i<sizeof(arr)-1; i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    Circular q(7);
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
     q.dequeue();
    return 0;
}