#include<iostream>
using namespace std;

class Polygon
{
private:
    int base;
    int b;
    int a;
public:
    int geta()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        return a;
    }
    int getb()
    {
        cout<<"Enter the value of b";
        cin>>b;
        return b;
    }
    int getc()
    {
        cout<<"Enter the value of c";
        cin>>base;
        return base;
    }
};
class Triangel:protected Polygon
{
private:
    int height;
public:
    int getb()
    {
        cout<<"Enter the value of b:";
        cin>>b;
        return b;
    }
        int geta()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        return a;
    }
     int getc()
    {
        cout<<"Enter the value of a:";
        cin>>base;
        return base;
    }
    void area()
    {
        int s;
        s = (0.5*base*height);
        cout<<"area of triangel"<<s;
    }
    void primeter()
    {
        int s;
        s = (a+b+base)/2;
        cout<<"\nPerimeter"<<s;
    }
};
int main()
{
    Triangel obj1;
    obj1.area();
    obj1.primeter();
}
