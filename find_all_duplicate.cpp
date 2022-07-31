#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    vector<int> nums={5,6,4,5,4,3,2,1};
    int n=nums.size();
    sort(nums.begin(),nums.end());
        for(int i=0; i <n; i++){
        cout << nums.at(i) << ' ';
        }
        cout<<endl;
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i+1]){
            ans.push_back(nums[i]);   
        } 
    }
        for(int i=0; i < ans.size(); i++){
        cout << ans.at(i) << ' ';
    }
}