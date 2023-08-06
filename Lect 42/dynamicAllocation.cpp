#include <iostream>
using namespace std;

class hero
{
private:
    char level;

public:
	
    int health;
//	hero(int health)
//	{
//		cout<<"this -> "<<this<<endl;
//		this -> health = health;		
//	}

	hero()
	{
		cout<<"\nConstructor called"<<endl;
	}

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int x)
    {
        health = x;
    }

    void setLevel(char y)
    {
        level = y;
    }
};

int main()
{

	hero *b = new hero;									//dynamic allocation

	cout<<"Size of object : "<<sizeof(b)<<endl<<endl;
    b->setHealth(70);
    cout << b->health << endl;

    b->setLevel('B');
    cout << b->getLevel() << endl;

    cout << endl;

    (*b).setHealth(50);
    cout << b->getHealth() << endl;

    (*b).setLevel('C');
    cout << b->getLevel() << endl;
    
    delete b;
    
}
