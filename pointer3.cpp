#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20]={12,23,44,85};
    cout<<"->"<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<a +1<<endl;
    cout<<*(a+1)<<endl;
    cout<<*a + 1<<endl;
    cout<<"->"<<sizeof(&a[0])<<endl;
    cout<<sizeof(&a)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a +1)<<endl;
    cout<<sizeof(*(a+1))<<endl;
    cout<<sizeof(*a + 1)<<endl;
    int *p = &a[0];
    cout<<p<<endl;
    cout<<a +1<<endl;
    cout<<p+1<<endl;
     cout<<*(a +1)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*p<<endl;
    cout<<"->"<<&p<<endl;
}