#include<iostream>

using namespace std;
int binaryseach(int arry[],int size, int num ){
int start=0;
int end=size-1;
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
int main(){
    int arry[]={2,3,4,5,6,7,8,9,10};
    int size=sizeof(arry)/4;
    int index=binaryseach(arry,size,9);
    cout<<index;
}