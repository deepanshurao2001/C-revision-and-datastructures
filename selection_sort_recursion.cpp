#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n, int i){
    if(i == (n-1)){
        return;
    }
    int minIndex =i;
     for(int j=i+1; j<n;j++){
            if(arr[j]< arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
        selectionSort(arr,n,i+1);
}
int main(){
    vector <int> arr={4,2,6,5,88,66};
    selectionSort(arr,6,0);
     for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
}