#include<iostream>
using namespace std;
void swapalternative(int arry[], int size){
    for(int i=0;i<size;i+=2){
       swap(arry[i],arry[i+1]);
    }
}
void printarray(int arry[], int size){
    for(int i=0;i<size;i++){
        cout<<arry[i]<<" ";
    }
} 
int main(){
    int arry[]={1,2,3,4,5,6,7,8};
swapalternative(arry, sizeof(arry)/sizeof(int));
cout<<endl;
printarray(arry,sizeof(arry)/sizeof(int));
}

