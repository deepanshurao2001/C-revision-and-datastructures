#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"Barking "<<endl;
    
    }
};
class Human{
    public:
    string color;
    public: 
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
// multiple inheritance
class Hybrid: public Animal,public Human{

};
int main(){
    Hybrid h1;
    h1.speak();
}