#include<iostream>
using namespace std;
void selectioSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for( ; j>=0 ; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,6,9,13,11,12,0};
    selectioSort(arr,7);
}