#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>>index;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                index.push_back(temp);
                }
                }
                }
                sort(index.begin(),index.end());
                 for (int i = 0; i < index.size(); i++) {
        for (int j = 0; j < index[i].size(); j++)
            cout << index[i][j] << " ";
        cout << endl;
    }
}
int main(){
    vector<int> arr={2,-3,3,3,-2};
    pairSum(arr,5);
}