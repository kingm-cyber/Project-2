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
	string physicalDescription = "Canines typically have long bushy tails, lots of fur, and sharp, specialized teeth for hunting prey.";

public:
	
	//constructor
	Canine(string n) : Animal(n) {};

	//functions
	void animalSound(void) 
	{
		cout << animalName << " goes: GRRRR!" << endl;
	}

	void getCanineAttributes(void) 
	{
		cout << generalInfo << endl;
		cout << canineFunFact << endl;
		cout << physicalDescription << endl;
	}

};

class Dog : public Canine {
protected:
	
	string MBF = "Dogs are known as man's best friend.";
	string domesticated = "Dogs are simply domesticated wolves.";
	string dogDiet = "Dogs are considered omnivores, and have evolved to eat more controlled diets and human food.";

public:

	//constructor
	Dog(string n) : Canine(n) {};

	//functions
	void animalSound(void) 
	{
		cout << animalName << " goes: BARK! BARK!" << endl;
	}

	void getDogAttributes(void) 
	{
		cout << MBF << endl;
		cout << domesticated << endl;
		cout << dogDiet << endl;
	}

};

class Wolf : public Canine {
protected:

	string packHunting = "Wolves are known for their ability to hunt animals much larger than them by hunting together in a group called a \"pack\".";
	string wolfDiet = "Wolves are primarily carnivors, and they are able to digest raw meats much better than their domesticated counter parts.";

public:

	//constructor
	Wolf(string n) : Canine(n) {};

	//functions
	void animalSound(void)
	{
		cout << animalName << " goes: AWOOOOO!" << endl;
	}

	void getWolfAttributes(void) 
	{
		cout << packHunting << endl;
		cout << wolfDiet << endl;
	}

};

class Feline : public Animal {
protected:

	string generalInfo = "Felines have an average lifespan of 2-16 years, which varies greatly depending on the type of feline.";
	string felineFunFact = "Fun Fact: Felines are apparently the only mammal on earth who don't have the ability to taste sweetness.";
	string physicalDescription = "Felines are known to have retractable claws, sharp teeth, and impressive night vision.";
	
public:

	//constructor
	Feline(string n) : Animal(n) {};

	//functions
	void animalSound(void) 
	{
		cout << animalName << " goes: GRRRR!" << endl;
	}

	void getFelineAttributes(void) 
	{
		cout << generalInfo << endl;
		cout << felineFunFact << endl;
		cout << physicalDescription << endl;
	}

};

class Lion : public Feline {
protected:

	string pride = "Lions are the only known felines to live in groups, and a group of lions is called a \"pride\".";
	string mane = "Male lions are known for their distinctive fur around their head called a \"mane\", while females lions do not have this.";
	string roar = "A major difference between domesticated cats and wild cats is the sound they make: lions have the ability to roar, but cannot purr like domesticated cats.";

public:
	
	//constructor
	Lion(string n) : Feline(n) {};

	//functions
	void animalSound(void) 
	{
		cout << animalName << " goes: ROAR!" << endl;
	}

	void getLionAttributes(void) 
	{
		cout << pride << endl;
		cout << mane << endl;
		cout << roar << endl;
	}

};

class Cat : public Feline {
protected:

	string domesticated = "The typical house cat seen today comes from domestication of wild cats, such as lions and tigers.";
	string indoorOutdoor = "Domesticated cats can either be indoor cats, that remain almost exclusively indoors, or outdoor cats, that roam around and return home at night.";
	string catFunFact = "Fun Fact: Cats are some of the only Felines that will almost always land on their feet.";

public:

	//constructor
	Cat(string n) : Feline(n) {};

	//functions
	void animalSound(void)
	{
		cout << animalName << " goes: MEOW! MEOW!" << endl;
	}

	void getCatAttributes(void) 
	{
		cout << domesticated << endl;
		cout << indoorOutdoor << endl;
		cout << catFunFact << endl;
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
		cout << "Animal Class Attributes: \n\n";
		//creates object
		Animal* animalObj = new Animal("an animal");

		//prints obects attributes
		animalObj->getAnimalName();
		animalObj->makeAnimalSound();

		delete animalObj;
		break;
	}
	case 2: {
		cout << "Canine Class Attributes: \n";
		//creates pointer to object
		Canine* canineObj = new Canine("a canine");

		//prints objects attributes (including inherited attributes)
		canineObj->getAnimalName();
		canineObj->makeAnimalSound();
		canineObj->getCanineAttributes();

		//delete the pointer object
		delete canineObj;
		break;
	}
	case 3: {
		cout << "Dog Class Attributes: \n";
		//creates pointer to object
		Dog* dogObj = new Dog("a dog");

		//prints objects attributes (including inherited attributes)
		dogObj->getAnimalName();
		dogObj->makeAnimalSound();
		dogObj->getCanineAttributes();
		dogObj->getDogAttributes();
		
		//delete the pointer object
		delete dogObj;
		break;
	}
	case 4: {
		cout << "Wolf Class Attributes: \n";
		//creates pointer to object
		Wolf* wolfObj = new Wolf("a wolf");

		//prints objects attributes (including inherited attributes)
		wolfObj->getAnimalName();
		wolfObj->makeAnimalSound();
		wolfObj->getCanineAttributes();
		wolfObj->getWolfAttributes();

		//delete the pointer object
		delete wolfObj;
		break;
	}
	case 5: {
		cout << "Feline Class Attributes: \n";
		//create pointer to object
		Feline* felineObj = new Feline("a feline");

		//prints objects attributes (including inherited attributes)
		felineObj->getAnimalName();
		felineObj->makeAnimalSound();
		felineObj->getFelineAttributes();

		//delete pointer object
		delete felineObj;
		break;
	}
	case 6: {
		cout << "Lion Class Attributes: \n";
		//create pointer to object
		Lion* lionObj = new Lion("a lion");

		//prints objects attributes (including inherited attributes)
		lionObj->getAnimalName();
		lionObj->makeAnimalSound();
		lionObj->getFelineAttributes();
		lionObj->getLionAttributes();

		//delete pointer object
		delete lionObj;
		break;
	}
	case 7: {
		cout << "Cat Class Attributes: \n";
		//create pointer to object
		Cat* catObj = new Cat("a cat");

		//prints objects attributes (including inherited attributes)
		catObj->getAnimalName();
		catObj->makeAnimalSound();
		catObj->getFelineAttributes();
		catObj->getCatAttributes();

		//delete pointer object
		delete catObj;
		break;
	}
	case 8: {
		cout << "Exiting Program...\n\n\n";
		exit(1);
	}
	default: {
		cout << "ERROR: User did not enter a valid number. Please try again.";
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

		cout << "Choose a number (1-8): \t";
		cin >> userChoice;
		cout << "\n";

		userSelect(userChoice);

		//ask user if they want to view other class attributes
		cout << "\nWould you like to view another class's attributes? (y/n): \t";
		cin >> userAnswer;
		cout << "\n";

	} while (userAnswer == 'y' || userAnswer == 'Y');

	cout << "Exiting Program...\n\n\n";

	return 0;
}