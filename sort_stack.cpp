#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>& s, int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return;
    }
    int n =s.top();
    s.pop();
    sortedInsert(s, num);
    s.push(n);
}
void sort(stack<int>& s){
    if(s.empty())
    return;
    int num = s.top();
    s.pop();
    sort(s);
    sortedInsert(s,num);
}
void print(stack<int> s){
     if(s.empty()){
        return;
    }
    int n = s.top();
    cout<<n <<" "<<endl;
    s.pop();
    print(s);
    
    s.push(n);
}   
int main(){
    stack<int> s ;
    s.push(2);
    s.push(44);
    s.push(12);
    s.push(9);
    s.push(7);
    print(s);
    sort(s);
    cout<<"After sorting stack"<<endl;
    print(s);
}