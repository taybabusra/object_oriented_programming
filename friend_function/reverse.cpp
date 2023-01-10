#include<iostream>
using namespace std;
class number{
private:
    int number1;
public:
    friend int reverse_number(number);
};
int reverse_number(number num)
{
    cout<<"\n Enter the number:";
    cin>>num.number1;
    int num1;
    num1 = num.number1;
    int reversed_number =0;
    int remainder;
    while(num1!=0) {
        remainder = num1 % 10;
        reversed_number = reversed_number * 10 + remainder;
        num1 /= 10;
  }
  return reversed_number;
}
int main()
{
    number obj1;
    cout<<"\n Enter the number:";
    cout<<"Reversed_number ="<<reverse_number(obj1);
}
