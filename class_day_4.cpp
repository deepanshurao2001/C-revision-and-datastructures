#include<iostream>
using namespace std;
class Hero{
private:
    int health;
public:
    char level;
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    //parameterised Constructor
    Hero( int health){
        cout<<"this ->"<<this<<endl;
        this->health = health;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(int l){
        level = l;
    }
};
int main(){
    //object created statically
    cout<<"Hello"<<endl;
    Hero ramesh(10);
    cout<<"Address of ramesh:"<<&ramesh<<endl;
    cout<<"Hi"<<endl;
    //dynamically
    Hero *h = new Hero();
}