#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index , vector<vector<int> >& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums, output, index+1,ans);
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}
vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int> > ans;
        vector<int> output;
        int index =0;
        solve(nums, output, index, ans);
        return ans;
    
}

int main(){
vector<int> nums={1,2,3};
vector<vector<int>> vec = subsets(nums);
 for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}