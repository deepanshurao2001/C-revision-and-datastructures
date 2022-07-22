#include<iostream>
using namespace std;
void findunique(int arry[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arry[i];
    }
    cout<<"Unique element is:"<<ans;
}
int main(){
int aray[]={1,2,1,3,4,3,4};
findunique(aray,sizeof(aray)/sizeof(int));
}