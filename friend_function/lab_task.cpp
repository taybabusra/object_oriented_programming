#include<iostream>
using namespace std;
class cylinder;
class circle
{
private:
    int r=3;
    int area()
    {
        int a;
        a= 3.1416*r*r;
        return a;
    }
public:
     friend int value(circle,cylinder);
};
class cylinder
{
private:
    int height=5;
public:
    friend int value(circle,cylinder);
};
int value(circle obj1,cylinder obj2)
{
    int s;
    //s= obj1.area;
    return (obj1.area()*obj2.height);
}
int main()
{
    circle obj1;
    cylinder obj2;
    cout<<"Area of a cylinder= "<<value(obj1,obj2);
}

