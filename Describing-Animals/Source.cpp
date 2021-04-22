/*
	Project 2: Describing-Animals
	Created by: Matthew King
	SEC.205 C++
	Purpose: demonstrating inheritence between multiple classes
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

/*
	requirements:
	a. demonstrate that you understand classes and inheritance
	b. have at least one parent and two child classes that inherit properties from the parent class
	c. when application is run, it lists all classes and gives user the option to select any of them with a number. When number is selected
		the application will print out all of the attributes of that class (and any inherited attributes)
	d. classes should describe animals and types of animals
*/

//Parent class
class Animal {
protected:

	//class variables
	string animalName;

public:
	
	//constructors
	Animal(void) { animalName = "animal"; };
	Animal(string n) : animalName(n) {};
	
	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: NOISE" << endl;
	}

	string getName(void) 
	{
		return animalName;
	}

};

//Child classes
class Canine : public Animal {
protected:

	//think of a new attribute unique to canines but not all other animals
	//could be general information about canines (call it like canine general info) (or something like sharp teeth)

public:
	
	//constructor
	Canine(string n) : Animal(n) {};

	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: GRRRR!" << endl;
	}

};

class Dog : public Canine {
protected:
	
	//think of an attribute unique to dogs that can be listed only for cats when an object of this class is printed out
	//this is something specific to dogs, such as good house pets, ability to do tricks or something

public:

	//constructor
	Dog(string n) : Canine(n) {};

	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: BARK! BARK!" << endl;
	}

};

class Wolf : public Canine {
protected:

	//think of an attribute unique to wolves that can be listed only for cats when an object of this class is printed out

public:

	//constructor
	Wolf(string n) : Canine(n) {};

	//functions
	void makeSound(void)
	{
		cout << animalName << " goes: AWOOOOO!" << endl;
	}

};

class Feline : public Animal {
protected:

	//think of an attribute unique to felines that can be listed only for cats when an object of this class is printed out
	
public:

	//constructor
	Feline(string n) : Animal(n) {};

	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: GRRRR!" << endl;
	}

};

class Lion : public Feline {
protected:

	//think of an attribute unique to lions that can be listed only for cats when an object of this class is printed out

public:
	
	//constructor
	Lion(string n) : Feline(n) {};

	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: ROAR!" << endl;
	}

};

class Cat : public Feline {
protected:

	//think of an attribute unique to cats that can be listed only for cats when an object of this class is printed out

public:

	//constructor
	Cat(string n) : Feline(n) {};

	//functions
	void makeSound(void)
	{
		cout << animalName << " goes: MEOW! MEOW!" << endl;
	}

};

//functions
void userSelect(int x) 
{
	switch (x) 
	{
	case 1: {
		cout << "Animal class attributes: \n";
		//creates object
		Animal animalObj("an animal");

		//prints obects attributes (including inherited attributes)
		cout << "This is: " << animalObj.getName() << endl;
		animalObj.makeSound();
	}
	case 2: {
		cout << "Canine class attributes: \n";
	}

	}

	//creates object
	//prints objects attributes
	//deletes object
}

//main method
int main(void) {
	
	//variables
	char userAnswer;
	int userChoice;

	//do-while loop allowing the user to list all the different objects or exit the program
	do 
	{
		
		//entry section
		cout << "Select which class's attributes you would like to view: " << endl;

		//list classes
		cout << "\t AVAILABLE CLASSES \t\n";
		cout << "___________________________________\n";
		cout << "1. Animal\n";
		cout << "2. Canine\n";
		cout << "3. Dog\n";
		cout << "4. Wolf\n";
		cout << "5. Feline\n";
		cout << "6. Lion\n";
		cout << "7. Cat\n";
		cout << "8. EXIT\n";

		userSelect(userChoice);

		//ask user if they want to view other class attributes
		cout << "Would you like to view another classes attributes?\n";
		cin >> userAnswer;

	} while (userAnswer == 'y' || userAnswer == 'Y');

}