#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &inputStack, int count , int size){
    if(count == size/2){
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack,count+1,size);
    inputStack.push(num);
}
void PrintStack(stack<int> s)
{
if (s.empty())
return;
int x = s.top();
s.pop();
PrintStack(s);
cout << x << " ";
s.push(x);
}

int main(){
    stack<int> nums ;
    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);
    PrintStack(nums);
    solve(nums,0,nums.size());

}