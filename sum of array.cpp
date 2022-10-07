#include<iostream>
using namespace std;
int sumarr(int *arr,int size){
    if( size == 0){
        return 0;
    }
    if( size == 1){
        return arr[0];
    }
int remaining = sumarr(arr + 1 , size-1 );
int sum =  arr[0] + remaining;
return sum;
}
int main(){
int arr[]={1,2,3,4,5};
cout<<sumarr(arr,5);
}