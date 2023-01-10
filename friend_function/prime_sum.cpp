#include<iostream>
using namespace std;
class prime{
private:
    int number1;
public:
    friend int prime_sum(prime);
};
int prime_sum(prime num)
{
    cout<<"\n Enter the number:";
    cin>>num.number1;
}
int func(int num)
{
    int i;
    int flag = 1;
    for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
int main()
{
    number obj1;
    cout<<"\n Enter the number:";
    cout<<"Reversed_number ="<<reverse_number(obj1);
}
