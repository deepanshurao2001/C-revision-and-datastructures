#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int binaryseach(int arry[], int s,int e,int num ){
int start=s;
int end=e;
while(start<=end){
    int mid=(start+end)/2;
if(num == arry[mid]){
    return mid;
}
if(num >arry[mid]){
    start= mid+1;
}
else if (num<arry[mid])
{
    end=mid-1;
}
else{
    return -1;
}
}
}
int findPosition(int arry[],int n,int k){
    int pivot=getpivot(arry,n);
    if(k >= arry[pivot] && k<=arry[n-1]){
        return binaryseach(arry , pivot, n-1,k);
    }
    else{
        return binaryseach(arry,0, pivot-1,k);
    }
}
int main(){
    int arr[5]={7,8,1,3,7};
    cout<<findPosition(arr,5,3);
    
}