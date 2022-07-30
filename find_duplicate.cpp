#include<iostream>
using namespace std;
#include<vector>
void findDuplicate(vector<int> &arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<arr.size(); i++){
        ans = ans^i;
    }
    cout<<ans;
}
int main(){
  vector<int> a={1,2,3,4,5,4};
    findDuplicate(a);
}


