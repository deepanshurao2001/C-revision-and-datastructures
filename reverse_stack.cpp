#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> & s , int x ){
    if(s.empty()){
        s.push(x);
        return;
    }
    int n = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(n);
}
void reverse(stack<int> & s){
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.
}
void print(stack<int> s){
     if(s.empty()){
        return;
    }
    int n = s.top();
    cout<<n <<endl;
    s.pop();
    print(s);
    
    s.push(n);
}   
int main(){
    stack<int> s ;
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    print(s);
    insertAtBottom(s,10);
    cout<<"After pushing at bottom"<<endl;
    print(s);
    
}