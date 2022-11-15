#include<iostream>
using namespace std;

class Square
{
private:
    int side;
public:
    static int objectcount;
    //int Square :: objectcount =0;
    Square()
    {
        objectcount++;
    }
};

int Square :: objectcount;
int main()
{
    Square s1;
    cout<<"Total objects= "<<Square::objectcount<<endl;
    Square s2;
    cout<<"Total object ="<<Square::objectcount<<endl;
}

