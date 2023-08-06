#include <iostream>
using namespace std;
class hero
{
	public:
	
	int health;
	hero(int health)
	{
		cout<<"this -> "<<this<<endl;
		this -> health = health;				//this keyword : stores address of the current object
	}
};
int main()
{
	hero h1(10);
	cout<<"h1 -> "<<&h1<<endl;
}
