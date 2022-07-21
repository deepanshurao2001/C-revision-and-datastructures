#include<iostream>
using namespace std;
int sumofelement(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
return sum;
}
int main(){
    int arry[10];
cout<<"enter the element of the array"<<endl;
for(int i=0;i<sizeof(arry)/sizeof(int);i++){
    cin>>arry[i];
}
cout<<"Sum of element of array is:"<<sumofelement(arry,sizeof(arry)/sizeof(int));
}