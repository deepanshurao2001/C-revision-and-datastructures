#include<bits/stdc++.h>
using namespace std;
struct petrolPump
{
    /* data */
    int petrol;
    int distance;
};
int tour(petrolPump p[], int n){
    int deficit = 0;
    int balance = 0;
    int start = 0;
    for(int i=0; i<n ; i++){
        balance +=p[i].petrol - p[i].distance;
        if(balance < 0){
            deficit += balance;
            start = i+1;
            balance = 0;
        }
    }
    if(deficit + balance >=0)
    return start;
    else{
        return -1;
    }
}
int main()
{
    petrolPump p[4];
    p[0].petrol = 4;
    p[1].petrol = 6;
    p[2].petrol = 7;
    p[3].petrol = 4;
    p[0].distance = 6;
    p[1].distance = 5;
    p[2].distance = 3;
    p[3].distance = 5;
    cout<<tour(p , 4);
}
