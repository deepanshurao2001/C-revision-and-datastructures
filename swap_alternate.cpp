#include<iostream>
using namespace std;
void swapalternative(int arry[], int size){
    if(size%2!=0){
    for(int i=0;i<size-1;i+=2){
       swap(arry[i],arry[i+1]);
    }
    }
    else{
        for(int i=0;i<size-1;i+=2){
       swap(arry[i],arry[i+1]);
    }
    }
}
void printarray(int arry[], int size){
    for(int i=0;i<size;i++){
        cout<<arry[i]<<" ";
    }
} 
int main(){
    int arry[]={1,2,3,4,5,6,7,8,9,10};
swapalternative(arry, sizeof(arry)/sizeof(int));
cout<<endl;
printarray(arry,sizeof(arry)/sizeof(int));
}

