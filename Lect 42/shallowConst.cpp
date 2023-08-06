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

//    hero()
//    {
//        cout << "Constructor is called" << endl;
//    }

    hero(int health, char level)
    {
    	name = new char[100];
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }
    
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int
main()
{
    hero h1(70, 'A');
    char name[7] = "Aftab";
    h1.setName(name);
    h1.print();
}
