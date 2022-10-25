#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"Hello I am class A"<<endl;
    }
};
class B{
    public:
    void print(){
        cout<<"Hell0 I am Class B"<<endl;
    }
};
class c :public A, public B{

};
int main(){
    c hello;
    hello.A::print();
    hello.B::print();
}