#include<iostream>
using namespace std;

class Number{
protected:
    int x, y;
public:

void getData(){
        cout << "Enter your first number: ";
        cin >> x;
        cout << "Enter your second number: ";
        cin >> y;
    }
};
class Calculate : protected Number{
public:
     void display(){
        getData();
        cout << "Sum of two numbers is: " << x+y << endl;
     }
};

int main()
{
    Calculate obj1;
    obj1.display();
    return 0;
}
