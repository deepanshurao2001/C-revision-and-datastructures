#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
 void update(int *p){
    *p = *p + 1;
}
int getSum(int arr[], int n){
    cout<< endl << "Size : " << sizeof(arr) <<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
int main(){
     char name[10] = "DEEPANSHU";
    cout<<&name<<endl;
    cout<<name<<endl;
    char *c = &name[0];
    cout<<*c<<endl;
    int value= 5;
    int *p = & value;
    print(p);
    cout<<"Before update:"<<*p<<endl;
    update(p);
    cout<<"After update:"<<*p<<endl;
    int arr[10]={23,55,67,87};
    cout<<"Sum is:"<<getSum(arr,4);
    return 0;
}