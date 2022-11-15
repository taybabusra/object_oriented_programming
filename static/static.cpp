
#include<iostream>
using namespace std;

 class Shape
 {
 private:
    double base1;
    double base2;
    double height;
    double area;
    double calarea(int b,int h)
    {
        b=base1;
        h=height;
        triangle = 0.5*b*h;
        return triangle;
    }
    double calarea(int a,int b)
    {
        a=base1;
        b=base2;
        rect = a*b;
        return rect;
    }
    double calarea(int a)
    {
        a=base1;
        cirle= 3.1416*a*a;
        return cirle;
    }

 };
 int main()
 {
     Shape circle(5);
     Shape triangle(10,15);
     Shape rectangle(14,16)
 }
