#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={3,7,9};
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<"After pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
    }
}