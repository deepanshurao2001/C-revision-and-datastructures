#include<iostream>
using namespace std;

    int countDistinctWayToClimbStair(long long nstair){
        if(nstair < 0)
        return 0;
        if(nstair == 0)
        return 1;
        int ans = countDistinctWayToClimbStair(nstair-1)+countDistinctWayToClimbStair(nstair-2);
        return ans;
    }
int main(){
    cout<<countDistinctWayToClimbStair(5);
}