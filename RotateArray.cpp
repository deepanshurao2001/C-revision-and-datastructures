#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k){
vector<int> temp(nums.size());
for(int i=0 ; i<nums.size() ; i++){
    temp[(i+k)%nums.size()]=nums[i];
}
nums=temp;
}

int main(){
     vector<int> v;
     v.push_back(11);
     v.push_back(2);
     v.push_back(3);
     v.push_back(66);
     v.push_back(7);
     v.push_back(87);
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
rotate(v,2);
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
}