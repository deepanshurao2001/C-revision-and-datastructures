#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=5;
    cout<<"Address of Num:"<<&num<<endl;
    int *ptr=&num;
    cout<<"Printing num:"<<num<<endl;
    cout<<"Printing ptr:"<<ptr<<endl;
    cout<<"printing *ptr:"<<*ptr<<endl;
    (*ptr)++;
    cout<<*ptr<<endl;
    int *q=0;
    q=&num;
    cout<<q<<endl;
    cout<<*q<<endl;
    //copying pointer
    int *p=q;
    cout<<p<<"_"<<q<<endl;
    cout<<*p<<"_"<<*q<<endl;
    
     int **a=&q;
    cout<<*a<<"_"<<q<<endl;
    cout<<**a<<"_"<<*q<<endl;
    int i=3;
    int  *t=&i;
    cout<<(*t)++<<endl;
    cout<<*t<<endl;
    cout<<"before t"<<t<<endl;
    t=t+1;
    cout<<"After t"<<t<<" "<<*t<<endl;


    }