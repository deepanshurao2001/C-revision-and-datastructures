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
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
     }
     void push1(int element){
       if(top2 - top1 > 1){
        top1++;
        arr[top1]= element;
       }
       else{
        cout<<"Stack OverFlow"<<endl;
       }
     }
void push2(int element){
       if(top2 - top1 > 1){
        top2--;
        arr[top2]= element;
       }
       else{
        cout<<"Stack OverFlow"<<endl;
       }
     }
     int pop1(){
        if(top1 >=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
     }
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
     }

};
int main(){
  /* stack<int > s;
    s.push(2);
    s.push(3);*/
    TwoStack st(5);
    st.push1(22);
    st.push1(43);
    st.push1(44);
    cout<< st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    st.push2(9);
    st.push2(19);
    cout<<st.pop2()<<endl;
    cout<<st.pop2()<<endl;
}