#include<iostream>
using namespace  std;
class number
{
	private:
		int NUMBER;int sum1=0;
		public:
		    friend int sum(number);
};
int sum(number num)
{
    int i;
    int sum ;
    sum = num.sum1;
    cout<<"numbers that are divisible by 11 between 100 and 200\n";
    for(i=101; i<200; i++)
    {
    if(i%11==0)
    {
      cout<<"numbers divisble by 11 is= "<<i<<endl;
       sum=sum+i;
    }
    }
    return sum;
}

int main()
{
	number b;
	cout<<" Sum of all numbers divisible by 11 is= \n "<<sum(b)<<endl;
}
