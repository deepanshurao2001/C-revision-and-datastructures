#include<iostream>
using namespace std;
void searchelement(int arrr[],int size){
    int element;
    cout<<"enter the element you want to search:";
    cin>>element;
    for(int i=0;i<size;i++){
        if(element==arrr[i]){
            cout<<"item found at the position :"<<i+1;
        }
    }
}
int main()
{
int arry[10];
cout<<"enter the element of the array"<<endl;
for(int i=0;i<sizeof(arry)/sizeof(int);i++){
    cin>>arry[i];
}
searchelement(arry,sizeof(arry)/sizeof(int));
}