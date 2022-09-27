#include<iostream>
using namespace std;
int main(){
    int array[10]={1,12,13,34,65};
    cout<<array<<endl;
    cout<<&array[0]<<" 1st"<<*array<<endl;
    cout<<&array[1]<<" 2nd"<<*array +1<<endl;
    cout<<&array[2]<<" 3rd"<<*(array) +2<<endl;
    cout<<&array[3]<<" 4th"<<*(array +3)<<endl;
    cout<<&array[4]<<" 5th"<<*(array +4)<<endl;
    cout<<"5th"<<*(4 + array)<<endl;
    int i=3;
    cout<<i[array];
}