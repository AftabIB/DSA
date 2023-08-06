#include <iostream>
#include <string.h>
using namespace std;

class hero
{
private:
    int health;

public:
    char *name;					
    char level;

    hero()
    {
        cout << "Default Constructor is called" << endl;
        name = new char[100];						//name array is created
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    
    //copy constructor
    hero(hero& temp)
    {
    	char *ch = new char[strlen(temp.name) + 1];		//deep copy : creates the copy of memory
		strcpy(ch,temp.name);
		this->name = ch;
		cout<<"Copy constructor is called "<<endl;
		this->health = temp.health;
		this->level = temp.level;
	}
    
    void setHealth(int h)
    {
    	health = h;
	}
	
	void setLevel(char l)
	{
		level = l;
	}
	
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    
    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }
};

int main()
{
    hero h1;
    char name[7] = "Aftab";
    h1.setHealth(70);
    h1.setLevel('A');
    h1.setName(name);		
    h1.print();

    cout<<endl;
    
	//Default copy constructor
	
    //hero h2(h1);		//or		
	hero h2 = h1;
	h2.print();
	
	cout<<endl;
	
	h1.name[0] = 'a';
	h1.print();
	cout<<endl;
	cout<<"Deep Copy : different object , different (new)memory"<<endl;
	h2.print();				//shallow copy : different object but same memory		
}
