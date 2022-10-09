#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector <int> &arr, int n,int i){
if( i == n)
return ;
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
        insertionSort(arr, n ,i+1);
}
int main(){
    vector <int> arr={5,26,7,19,1};
    insertionSort(arr,5,0);
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}