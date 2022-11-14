#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
    //properties
     public:
     int *arr;
     int top1;
     int top2;
     int size;
     TwoStack(int size){
        this-> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
     }
     void push1(int element){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
     }
      void push2(int element){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
     }
     
     int pop1(){
        if(top1 >=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
     }
}; 