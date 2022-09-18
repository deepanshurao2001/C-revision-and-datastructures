#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            
            sum+=arr[row][col];
            cout<<arr[row][col]<<" ";
        }
        cout<<"sum of row is"<<sum<<endl;
        
    }
}