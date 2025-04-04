//It is implementation hiding.jo required cheese hai use hi dikhao no need to shoe all
//only u can change the code
//code reusablity
//avoids duplication of code
// C++ Program to Demonstrate the
// working of Abstraction
#include <iostream>
using namespace std;
 
class implementAbstraction {
private:
    int a, b;
 
public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
 
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
 
int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}