#include <iostream>
#include <string.h>
using namespace std;

class hero
{
	public:
		int avg;
		static int time;
		
	static int fun()
	{
		cout<<"Static function : ";
		return time;
	}
};

int hero::time = 5;									//syntax : datatype classname::fieldname = value; 	

int main()
{
	cout<<"Static member : "<<hero::time<<endl;		//static member
	cout<<hero::fun()<<endl;						//static function
}
