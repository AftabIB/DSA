#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    char level;

    hero()
    {
        cout << "Default Constructor" << endl;
    }

    // paramerterized constructor
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    hero(hero &temp)
    {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }
};

int main()
{
    // parameterized constructor
    hero r1(70, 'A');
    r1.print();

    // Copy constructor
    hero s1(r1);
    r1.print();
}