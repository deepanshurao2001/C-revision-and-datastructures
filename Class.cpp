#include<iostream>
#include "Hero.cpp"
using namespace std;
class Villan{
//properties
};
int main(){
    Hero ramesh;
    ramesh.sethealth(70);
    ramesh.setlevel('B');
    Villan v1;
    cout<<"Size:"<<sizeof(ramesh)<<endl;
    cout<<"health is "<<ramesh.gethealth()<<endl;
    cout<<"Level is "<<ramesh.getlevel()<<endl;

    cout<<"Size:"<<sizeof(v1)<<endl;
    return 0;
}