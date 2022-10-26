#include<iostream>
using namespace std;
class A{
    public:
    int a;
    public:
    void sayHello(){
        cout<<"Hello Deepanshu"<<endl;
    }
    int sayHello(char name){
        cout<<"Hello Deepanshu"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }
    void operator+ (A &obj){
        int value1 = this-> a;
        int value2 = obj.a;
        cout<<" Output "<<value2 - value1<<endl;
    }
    void operator() (){
        cout<<"Main Bracket hu"<<endl;
    }
};
int main(){
    A obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();
}