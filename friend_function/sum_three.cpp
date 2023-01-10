#include<iostream>
using namespace std;
//forward declaration
class Class2;
class Class3;
class Class1
{
private:
    int num1;
public:
    Class1()
    {
        num1 = 15;
    }
    friend int add(Class1, Class2,Class3);
    friend int multiply(Class1, Class2,Class3);
};
class Class2
{
private:
    int num2;
public:
    Class2()
    {
        num2 = 15;
    }
    friend int add(Class1, Class2,Class3);
    friend int multiply(Class1, Class2,Class3);
};
class Class3
{
private:
    int num3;
public:
    Class3()
    {
        num3 = 15;
    }
    friend int add(Class1, Class2,Class3);
    friend int multiply(Class1, Class2,Class3);
};
int add(Class1 obj1,Class2 obj2,Class3 obj3)
{
    return (obj1.num1+obj2.num2+ obj3.num3);
}
int multiply(Class1 obj1,Class2 obj2,Class3 obj3)
{
    return (obj1.num1*obj2.num2 * obj3.num3);
}
int main()
{
    Class1 obj1;
    Class2 obj2;
    Class3 obj3;
    cout<<"sum="<<add(obj1,obj2,obj3);
    cout<<"\n multiplication="<<multiply(obj1,obj2,obj3);
    return 0;
}
