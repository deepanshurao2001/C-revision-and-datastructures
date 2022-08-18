#include<iostream>
using namespace std;
 int firstocc(int arry[],int size,int num){
        int start=0;
        int end=size-1;
        int mid=start +(end-start)/2;
        int ans=1;
        while(start<=end){
            if(num == arry[mid]){
              ans = mid;
              end=mid-1;
            }
            else if(num < arry[mid]){
                end=mid-1;
            }
            else if(num > arry[mid]){
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
     }
int lastocc(int arry[],int size,int num){
        int start=0;
        int end=size-1;
        int mid=start +(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(arry[mid]== num){
            ans = mid;
              start = mid + 1;
            }
            else if(num < arry[mid]){
                end=mid-1;
            }
            else if(num > arry[mid]){
                start=mid+1;
            }
            mid=start + (end-start)/2;
        }
        return ans;
     }
int main(){
    int arry[]={1,2,3,3,3,4,5,6,7,8};

    cout<<"First occurence of 3 is:"<<firstocc(arry,10,3)<<endl;
    cout<<"last occurence of 3 is:"<<lastocc(arry,10,3)<<endl;

}