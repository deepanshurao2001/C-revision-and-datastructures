#include<iostream>
using namespace std;
#define min(a,b) ( ( (a) < (b) ) ? (a) : (b) )
#define pi 3.14
int main(){
    int r=5;
    double area = pi*r*r;
    cout<<"Area is:"<<area<<endl;
    int a=3;
    int b=5;
    cout<<"Minimum value is:"<<min(a,b);
    return 0;
}