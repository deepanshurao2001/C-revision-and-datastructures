#include<bits/stdc++.h>
using namespace std;
int main(){
    int value=5;
     int *ptr = &value;
     cout<<sizeof(ptr)<<endl;
     int **ptr2 = &ptr;
     cout<<ptr<<endl;
     cout<<ptr2<<endl;
     cout<<*ptr2<<endl;
     cout<<&ptr<<endl;
     cout<<ptr2<<endl;
     cout<<sizeof(ptr2)<<endl;
     cout<<*ptr2<<endl;
     cout<<*ptr2 +1<<endl;
     cout<<endl<<ptr2<<endl;
     cout<<ptr2+1<<endl;
     cout<<endl<<*(ptr2 + 1)<<endl;

}