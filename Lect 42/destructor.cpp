#include<iostream>
using namespace std;

class hero
{
	public:
	hero()
	{
		cout<<"Default constructor called"<<endl;	
	}	
	
	~hero()
	{
		cout<<"Destructor called"<<endl;
	}
};
int main()
{
	hero h1;
	hero *h2 = new hero();
	delete h2;
}
