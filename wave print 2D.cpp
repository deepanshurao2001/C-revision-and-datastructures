#include<bits/stdc++.h>
using namespace std;
vector<int> printwave(vector<vector<int>> arr, int nrow,int ncol){
    vector<int > ans;
    for(int col=0; col<ncol; col++){
        if(col&1){
            for(int row = nrow-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0; row<nrow; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}
int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    vector<int> arr1=printwave(arr,4,4);
   print(arr1);
}