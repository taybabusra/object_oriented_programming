#include<iostream>
using namespace std;

class Trapezium
{
public:
    float base1;
    float base2;
    float height;
    float area;
double cal_area()
    {
        area = 0.5*height*(base1+base2);
        return area;
    }
//Trapezium()
//With  THREE VARIABLE
 Trapezium(float b1,float b2,float h)
{
   base1=b1;
   base2=b2;
   height=h;
}
 Trapezium(float b1,float b2,float h)
{
   base1=b1;
   base2=b1;
   height=h;
}

};
int main()
{
    Trapezium obj1(10,12,20);
    Trapezium obj(0,0,0);
    Trapezium obj2(10,10,23);

    cout<<obj2.cal_area();
    cout<<obj.cal_area();
    cout<<obj1.cal_area();
}
