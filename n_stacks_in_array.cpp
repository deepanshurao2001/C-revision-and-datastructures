#include<bits/stdc++.h>
using namespace std;
class NStack{
    int *arr;
    int *top;
    int *next;

    int n,s;
    int freespot;
    public:
    NStack(int N, int S){
        n = N;
        s =S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        for(int i = 0; i<n ; i++){
            top[i] = -1;
        }
        for(int i = 0 ;i<s ; i++){
            next[i] = i+1;
        }
        next[s-1] = -1;
        freespot = 0;
    }
    bool push(int x , int m){
        if(freespot == -1){
            return false;
        }
        int index = freespot;

        freespot = next[index];
        arr[index] = x;
        next[index] = top[m-1];
        top[m-1] = index;
        return true;
    }
    int pop(int m){
        if(top[m-1] == -1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index; 
        return arr[index];
    }
};
int main(){
    NStack n(3,9);
    n.push(1,1);
    n.push(2,1);
    n.push(3,1);
    n.push(4,2);
    n.push(5,2);
    n.push(6,2);
    n.push(7,3);
    n.push(8,3);
    n.push(9,3);
    cout<<n.pop(1)<<endl;
    cout<<n.pop(1)<<endl;
    cout<<n.pop(1)<<endl;
    cout<<n.pop(2)<<endl;
    cout<<n.pop(2)<<endl;
    cout<<n.pop(2)<<endl;
    cout<<n.pop(3)<<endl;
    cout<<n.pop(3)<<endl;
    cout<<n.pop(3)<<endl;
}