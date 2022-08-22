#include<iostream>
using namespace std;
  long long int binarySearch(int n){
    int s=0;
    int e=n;
    long long int mid=s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n)
        return mid;
        if(square < n){
            ans= mid;
            s= mid+1;
        }
        else{
            e =mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
  }
  int mySqrt(int x){
    return binarySearch(x);
  }
  int main(){
    cout<<mySqrt(1000000);
  }