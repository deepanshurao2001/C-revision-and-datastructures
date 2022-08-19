#include<iostream>
using namespace std;
int peakindex(int arry[],int size){
    int start=0;
    int end=size-1;
    int mid=start + (end- start)/2;
    while(start<end){
        if(arry[mid]<arry[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return start;
}
int main(){
    int arry[]={0,1,2,3,5,7,4,3,2,1};
    int size=sizeof(arry)/4;
    int peakin=peakindex(arry,size);
    cout<<"peak index in the arry is:"<<peakin<<endl;
    cout<<"element at peak indea is:"<<arry[peakin];
}