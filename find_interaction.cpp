#include<iostream>
#include<vector>
using namespace std;
void find_interaction(vector<int> &arry1,int n,vector<int> &arry2,int m){
    int i=0, j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(arry1[i] < arry2[j]){
            i++;
        }
        else if(arry1[i]==arry2[j]){
            ans.push_back(arry1[i]);
            i++;
            j++;
        }
        else{
            j++;
        }

    }
    for(int a=0;a<ans.size();a++){
        cout<<ans.at(a);
    }
}
int main(){
    vector<int> arry1={1,2,2,3,4,5,6};
    vector<int> arry2={3,4,5,5,6};
    int n=arry1.size();
    int m=arry2.size();
    find_interaction(arry1,n,arry2,m);
}