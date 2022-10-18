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
    Hero ramesh;
    cout<<"Hi"<<endl;
    //dynamically
    Hero *h = new Hero();
}