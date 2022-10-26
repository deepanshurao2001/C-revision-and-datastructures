#include<iostream>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog: public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    Dog obj1;
    obj1.speak();
}