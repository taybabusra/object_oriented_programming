#include<iostream>
#include<math.h>
using namespace std;
class batsman
{
	int batcode;
	char batname[20];
	int innings;
	int notout;
	int runs;
	float batavg;
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}
public :
	void readdata ();
	void displaydata();
};
void batsman::readdata ()
{
	cout<<"Enter batsman code: ";
	cin>> batcode;
	cout<<endl;
	cout<<"Enter batsman name:";
	cin>>batname;
	cout<<endl;
	cout<<"enter innings:";
	cin>>innings;
	cout<<endl;
	cout<<"Enter the not-out:";
	cin>>notout;
	cout<<"enter the runs:";
	cin>>runs;
	calcavg();
}
void batsman::displaydata()
{
	cout<<"Output of the code:"<<endl;
	cout<<"Batsman code: "<<batcode<<"\nBatsman name: "<<batname<<"\nInnings: "<<innings
	<<"\nNot out: "<<notout<<"\nRuns: "<<runs<<"\nBatting Average: "<<batavg;
}
int main()
{
	batsman obj;
	obj.readdata();
	obj.displaydata();
	return 0;
}

