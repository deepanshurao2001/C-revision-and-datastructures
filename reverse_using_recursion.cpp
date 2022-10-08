#include<iostream>
using namespace std;
 void reverse(string& name,int i){
    if(i>(name.length()-1)/2)
    return ;
    swap(name[i],name[name.length()-1-i]);
    i++;
    reverse(name,i);
 }
int main(){
 string name="Deepanshu";
 reverse(name,0);
 cout<<name<<endl;
 }