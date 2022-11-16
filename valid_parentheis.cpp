#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i=0; i<expression.length(); i++){
        char ch = expression[i];
        cout<<ch<<endl;
        if(ch == '(' || ch == '{'|| ch == '[' ){
            s.push(ch);
        }
        else
        {
                if(!s.empty()){
                    char top = s.top();
                    if((ch == ')' && s.top() == '(') ||
                     ( ch == '}' && s.top() == '{') ||
                      (ch == ']' && s.top() == '[')){
                        s.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
        }
    }
    
    if(s.empty()){
    return true;
    }
    else{
    return false;
    }
}
void printStack(stack<char> expresion){
    if(expresion.empty()){
        return ;
    }
    char x = expresion.top();
    expresion.pop();
    printStack(expresion);
    cout<<x<<" ";
    expresion.push(x);
}
int main(){
    string s = "[{()}]";
    cout<<isValidParenthesis(s);
}