#include<iostream>
using namespace std;
class distance{
    int meter;
    int value;
    //friend function
    friend int addvalue(distance);
public:
    //default constructor
    distance()
    {
        meter = 0;
    }
};

int addvalue(distance d)
{
    cout<<"Enter the value you want to add: ";
    cin>> d.value;
    int s;
    s = d.meter+d.value;
    return s;
}
int main()
{
    distance D;
    cout<<"Distance: "<<addvalue(D);
    return 0;
}
