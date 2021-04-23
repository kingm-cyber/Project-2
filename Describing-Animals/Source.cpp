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
	virtual void animalSound(void) 
	{
		cout << animalName << " goes: ..." << endl;
	}

	void makeAnimalSound(void) 
	{
		animalSound();
	}

	virtual void printAnimalName(void) 
	{
		cout << "This is: " << animalName << endl;
	}

	void getAnimalName(void) 
	{
		printAnimalName();
	}

};

//Child classes
class Canine : public Animal {
protected:

	string generalInfo = "Canines have a general lifespan of 10-13 years, and sleep around 12-14 hours per day.";
	string canineFunFact = "Fun Fact: there are around 36 living species in the caninae family.";
	string physicalDescription = "Canines typically have sharp teeth, long bushy tails, and lots of fur.";

public:
	
	//constructor
	Canine(string n) : Animal(n) {};

	//functions
	void animalSound(void) 
	{
		cout << animalName << " goes: GRRRR!" << endl;
	}

	void getGeneralInfo(void) 
	{
		cout << generalInfo << endl;
	}

	void getCanineFunFact(void) 
	{
		cout << canineFunFact << endl;
	}

	void getPhysicalDescription(void) 
	{
		cout << physicalDescription << endl;
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
	void animalSound(void) 
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
	void animalSound(void)
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
	void animalSound(void) 
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
	void animalSound(void) 
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
	void animalSound(void)
	{
		cout << animalName << " goes: MEOW! MEOW!" << endl;
	}

};

//global variables
int userChoice;

//functions
void userSelect(int x) 
{
	switch (x) 
	{
	case 1: {
		cout << "Animal class attributes: \n";
		//creates object
		Animal* animalObj = new Animal("an animal");

		//prints obects attributes
		animalObj->getAnimalName();
		animalObj->makeAnimalSound();

		delete animalObj;
		break;
	}
	case 2: {
		cout << "Canine class attributes: \n";
		//creates object
		Canine* canineObj = new Canine("a canine");

		//prints objects attributes (including inherited attributes)
		canineObj->getAnimalName();
		canineObj->makeAnimalSound();
		canineObj->getGeneralInfo();
		canineObj->getCanineFunFact();
		canineObj->getPhysicalDescription();

		delete canineObj;
		break;
	}
	case 3: {
		cout << "Dog Class Attributes: \n";
		//creates object
		Dog* dogObj = new Dog("a dog");

		//prints objects attributes (including inherited attributes)
		dogObj->getAnimalName();
		dogObj->makeAnimalSound();
		dogObj->getGeneralInfo();
		dogObj->getCanineFunFact();
		dogObj->getPhysicalDescription();
		

		delete dogObj;
		break;
	}
	case 4: {
		
	}
	case 5: {
		
	}
	case 6: {
		
	}
	case 7: {
		
	}
	case 8: {
		cout << "Exiting Program..." << endl;
		exit(1);
	}

	}

}

//main method
int main(void) {
	
	//variables
	char userAnswer;
	

	//do-while loop allowing the user to list all the different objects or exit the program
	do 
	{
		
		//entry section
		cout << "Select which class's attributes you would like to view: \n" << endl;

		//list classes
		cout << "---------------------\n";
		cout << "| AVAILABLE CLASSES |\n";
		cout << "---------------------\n";
		cout << "| 1. Animal         |\n";
		cout << "| 2. Canine         |\n";
		cout << "| 3. Dog            |\n";
		cout << "| 4. Wolf           |\n";
		cout << "| 5. Feline         |\n";
		cout << "| 6. Lion           |\n";
		cout << "| 7. Cat            |\n";
		cout << "| 8. EXIT           |\n";
		cout << "---------------------\n\n";

		cin >> userChoice;

		userSelect(userChoice);

		//ask user if they want to view other class attributes
		cout << "\nWould you like to view another classes attributes?\n";
		cin >> userAnswer;

	} while (userAnswer == 'y' || userAnswer == 'Y');


	return 0;
}