#include <iostream>
using namespace std;

class Rectangle {/*create a class named Rectangle*/
private:

  float l,b; /*this class has two private variables l and b*/

  float getArea(float l, float b) /*this class has one member-function getArea which returns the area of the rectangle*/
  {

   return l*b; /*return the area of the rectangle*/

  }
  float getperemiter(float l, float b) /*this class has one member-function getArea which returns the area of the rectangle*/
  {

   return 2*(l+b); /*return the area of the rectangle*/
  }
public:
    void initData(float l,float b);
    // display() function to display private function
    void displaydata()
    {
        cout<<getArea()<<endl;
        cout<<getperemiter()<<endl;
    }
};


void Rectangle::readdata()
{
 cout<<"Enter the length of the rectangle: ";

 cin>>l; /*input the length of the rectangle from the user*/

 cout<<"Enter the breadth of the rectangle: ";

 cin>>b; /*input the breadth of the rectangle from the user*/
 getArea();
 getperemiter();

}
void Rectangle :: initData(float len,float hgt){
        l =len;
        b=hgt;
};

void Rectangle::displaydata()
{
 cout <<"Area of the rectangle is: "<< r1.getArea(l,b)<<" square units."<<endl; /*find the area of the rectangle using the member function of the class*/
 cout <<"perimeter  of the rectangle is: "<< r1.getperemiter(l,b)<<" units.";

}
int main () { /*the main function to check the working of our Rectangle class*/


 float l,b;

 Rectangle r1; /*create an object r1 of Rectangle class*/

 cout<<"Enter the length of the rectangle: ";

 cin>>l; /*input the length of the rectangle from the user*/

 cout<<"Enter the breadth of the rectangle: ";

 cin>>b; /*input the breadth of the rectangle from the user*/
 rl.initData(l,b);

 //cout <<"Area of the rectangle is: "<< r1.getArea(l,b)<<" square units."<<endl; /*find the area of the rectangle using the member function of the class*/
 //cout <<"perimeter  of the rectangle is: "<< r1.getperemiter(l,b)<<" square units.";
 //rl.readdata();

 rl.displaydata();
 return 0;
}
