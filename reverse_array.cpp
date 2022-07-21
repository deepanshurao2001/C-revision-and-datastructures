#include<iostream>
using namespace std;
void reverse(int arry[], int size){
    int array[10];
    for(int i=0;i<size;i++){
        array[i]=arry[i];
    }
for(int i=0;i<size;i++){
arry[i]=array[size-i-1];
}
}
void printarray(int arry[], int size){
    for(int i=0;i<size;i++){
        cout<<arry[i]<<" ";
    }
} 
int main(){
    int arry[5];
cout<<"enter the element of the array"<<endl;
for(int i=0;i<sizeof(arry)/sizeof(int);i++){
    cin>>arry[i];
}
reverse(arry, sizeof(arry)/sizeof(int));
printarray(arry,sizeof(arry)/sizeof(int));
}