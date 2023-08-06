#include <iostream>
#include <string.h>
using namespace std;

class hero
{
	public:
		static int time;
};

int hero::time = 5;			//syntax : datatype classname::fieldname = value; 	

int main()
{
	cout<<hero::time<<endl;
}
