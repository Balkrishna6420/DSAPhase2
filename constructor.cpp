//constructor-It is envoked during object creation
//It has no return type and input parameter
#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;

    Hero(){//once we write our manual constructor default constructor generatwd i  the system will be omitted
        cout<<"Constructor called"<<endl;
    }
    Hero(int health){//parametrized constructor 
        this->health=health;
    }
    Hero(int health,char level){//parametrized constructor ;current object ka address this keyword me store hota hai
        cout<<"Address ofthis"<<this<<endl;
        this->level=level;//object ke level ke andar input ke level o copy kar diya
        this->health=health;
    }
    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    char setlevel(char ch ){
        level=ch;
    }
};
int main(){
    // cout<<"hi"<<endl;
    // Hero ramesh;//here behind the scene construcor is envoked first ie, ramesh.Hero()ie.Hero function is called which is called default constructor
    // cout<<"hello"<<endl;
    Hero ramesh(10);
    cout<<"Address of ramesh"<<&ramesh<<endl;
    ramesh.getHealth();
    ramesh.print();

    //dynamically
    Hero *h=new Hero(11);
    Hero temp(22,'B');
    h->print();
} 

//once any constructor is called the default constructor generated will be omitted