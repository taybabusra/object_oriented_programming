#include<iostream>
using namespace std;

class BOX{
private:
    double length;
    double breadth;
    double height;
    double calculateVoulm()
    {
        return length*breadth*height;
    }
    double calculateArea(){
        return length*breadth;
    }
public:
    void initData(double len,double brth, double hgt);
    // display() function to display private function
    void display()
    {
        cout<<calculateArea()<<endl;
        cout<<calculateVoulm()<<endl;
    }
};
//define function outside the class which is declared inside the class
void BOX :: initData(double len,double brth, double hgt){
        length =len;
        breadth =brth;
        height =hgt;
}
int main()
{
    BOX box1;
    box1.initData(42.5,30.8,19.2);
    box1.display();
    return 0;
}
