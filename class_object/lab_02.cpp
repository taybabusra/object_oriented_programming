#include <iostream>
using namespace std;

class Rectangle {/*create a class named Rectangle */
private:

  float l,b; /*this class has two private variables l and b*/

  public:

  float getArea(float l, float b) /*this class has one member-function getArea which returns the area of the rectangle*/
  {

   return l*b; /*return the area of the rectangle*/

  }
  float getperemiter(float l, float b) /*this class has one member-function getArea which returns the area of the rectangle*/
  {

   return 2*(l+b); /*return the area of the rectangle*/
  }

};

int main () { /*the main function to check the working of our Rectangle class*/


 float l,b;

 Rectangle r1; /*create an object r1 of Rectangle class*/

 cout<<"Enter the length of the rectangle: ";

 cin>>l; /*input the length of the rectangle from the user*/

 cout<<"Enter the breadth of the rectangle: ";

 cin>>b; /*input the breadth of the rectangle from the user*/

 cout <<"Area of the rectangle is: "<< r1.getArea(l,b)<<" square units."<<endl; /*find the area of the rectangle using the member function of the class*/
 cout <<"perimeter  of the rectangle is: "<< r1.getperemiter(l,b)<<" square units.";
 return 0;
}
