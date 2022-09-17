#include<iostream>
using namespace std;
string replace(string s){
    for(int i=0; i<s.length();i++){
        if(s[i] == ' '){
            s[i] = '@40';
        }
    }
    return s;
}
int main(){
string s={"my name is Deepanshu"};
    cout<<"String after replace:"<<replace(s);
}