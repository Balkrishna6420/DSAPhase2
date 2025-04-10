//Destructor -it is deallocation of memory
//Its name is same as class name
//It also has no return type and no input parameter
//it is automaticaaled made after the object creation or it can manualyy be created also.
//it is same as constructor and the difference is that it has tilda sign like ~ .
//destructor is called automatocally for statically allocated object but not for dynamically allocated object.we have to call it manually like delete
#include<bits/stdc++.h>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
    //destructor
    ~Hero(){
        cout<<"Destructor bro called"<<" "<<endl;
    }


};
int main(){
    //statically made object
    Hero a;

    //dynamically made object
    Hero *b=new Hero();
    //to call the destructor dynamically made  we have to mnually call it like
    delete b;

}

