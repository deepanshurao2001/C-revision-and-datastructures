#include<bits/stdc++.h>
using namespace std ;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> arr;
    int row=matrix.size();
    int col=matrix[0].size();
    int count=0;
    int total= row*col;
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
    while(count < total){
            //printing starting Row
            for(int index=startingcol; count<total && index<=endingcol;index++){
                arr.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            //printing ending coloumn
            for(int index=startingrow;count<total && index<=endingrow;index++){
                arr.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;
            //printing ending row
            for(int index=endingcol;count<total && index>=startingcol;index--){
                arr.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            //printing starting coloumn
            for(int index=endingrow;count<total && index>=startingrow; index--){
                arr.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
    }
    return arr;
}
void printmatrix(vector<vector<int>>& matrix ){
for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}
int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printmatrix(matrix);
    vector<int> arr1=spiralOrder(matrix);
   print(arr1);
}

