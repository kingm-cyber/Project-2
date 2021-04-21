/*
	Project 2: Describing-Animals
	Created by: Matthew King
	SEC.205 C++
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

/* CLASSES */

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

};

//Child classes
class Dog : public Animal {
protected:

	//think of a new attribute unique to dogs but not all other animals

public:
	
	//constructor
	Dog(string n) : Animal(n) {};

	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: BARK! BARK!" << endl;
	}

};

class Cat : public Animal {
protected:

	//think of an attribute unique to cats that can be listed only for cats when an object of this class is printed out
	
public:

	//constructors
	Cat(string n) : Animal(n) {};

	//functions
	void makeSound(void) 
	{
		cout << animalName << " goes: MEOW! MEOW!" << endl;
	}

};


//Main method
int main(void) {
	
	//variables
	char userAnswer;

	//do-while loop allowing the user to list all the different objects or exit the program
	do 
	{
		
		//list classes
		cout << "\t AVAILABLE CLASSES \t\n";
		cout << "___________________________________";
		cout << "1. \n";
		cout << "2. \n";
		cout << "3. \n";
		//allow user to exit program

		//ask user if they want to view other class attributes
		cout << "Would you like to view another classes attributes?\n";
		cin >> userAnswer;

	} while (userAnswer == 'y' || userAnswer == 'Y');

}