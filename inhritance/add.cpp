#include<iostream>
using namespace std;

class Marks{
protected:
    double marks[5];
    void num(){
        cout<<"Enter numbers:"<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }

    }
};

class Calculate : protected Marks{
public:
    double total_marks;
    void totalMarks(){
        num();
        for(int i=0;i<5;i++){

         total_marks+=marks[i];
        }
        cout << "Total numbers  :"<< total_marks << endl;
    }
};

class Percentage : public Calculate{
public:
     double getPercentage(){
        cout << "The Percentage is: " << total_marks/5 << endl;
    }
};


int main()
{
    Percentage obj1;
    obj1.totalMarks();
    obj1.getPercentage();
    return 0;
}
