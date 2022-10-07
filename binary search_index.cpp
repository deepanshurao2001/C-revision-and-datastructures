#include<iostream>
using namespace std;
 int binarySearch( int *arr, int s,int e,int k){
    if(s>e)
        return -1;
    int mid = s + (e-s)/2;
    if(arr[mid] == k)
    return mid;
    if(arr[mid] < k){
        return binarySearch(arr, mid+1,e,k);
    }
    else{
        return binarySearch(arr, s, mid-1,k);
    }
 }
int main(){

    int arr[6]={2,4,6,10,14,18};
    int size = 6;
    int key = 14;
    cout<<"Present at index"<< binarySearch(arr,0,5,key)<<endl;
    return 0;
}