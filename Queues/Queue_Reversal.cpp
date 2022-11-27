#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;
queue<int> rev(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
int main(){
    queue<int> q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    queue<int> rever = rev(q);
    while(!rever.empty()){
        cout<<rever.front()<<" ";
        rever.pop();
    }
}