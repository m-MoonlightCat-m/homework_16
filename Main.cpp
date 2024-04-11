#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string AnimSay;

public:
	Animal() {}
	Animal(string _AnimSay) : AnimSay(_AnimSay) {}
	virtual void Voice()
	{
		AnimSay = "Who say?";
		cout << AnimSay << "\n";
	}
};

class Cat : public Animal
{
public:
	Cat(){}
	Cat(string _CatSay) :  Animal(_CatSay) {}
	void Voice() override
	{
		AnimSay = "Meow";
		cout << AnimSay << "\n";
	}
};

class Owl : public Animal
{
public:
	Owl() {}
	Owl(string _CowSay) : Animal (_CowSay) {}
	void Voice() override
	{
		AnimSay = "Moo";
		cout << AnimSay << "\n";
	}
};

class Horse : public Animal
{
public:
	Horse() {}
	Horse(string _HorseSay) : Animal(_HorseSay) {}
	
	void Voice() override
	{
		AnimSay = "Neigh";
		cout << AnimSay << "\n";
	}
};

int main()
{
	Animal** animal = new Animal * [4];
	animal[0] = new Animal;
	animal[1] = new Cat;
	animal[2] = new Owl;
	animal[3] = new Horse;

	for (int i = 0; i < 4; i++)
	{
		animal[i]->Voice();
	}

	delete[] animal;

	return 0;
}