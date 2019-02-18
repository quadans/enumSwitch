#include <iostream>
#include <string>

enum Animal {
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};

std::string getAnimalName(Animal animal)
{
	switch (animal)
	{
	case PIG:
		return "Pig";

	case CHICKEN:
		return "Chicken";;

	case GOAT:
		return "Goat";;

	case CAT:
		return "Cat";;

	case DOG:
		return "Dog";;

	case OSTRICH:
		return "Ostrich";;

	default:
		std::cout << "ERROR!\n";
		return false;
	}
}

int printNumberOfLegs(Animal animal)
{
	switch (animal)
	{
	case PIG:
	case GOAT:
	case CAT:
	case DOG:
		return 4;

	case OSTRICH:
	case CHICKEN:
		return 2;
	
	default:
		std::cout << "ERROR!\n";
		return false;
	}
}


int main()
{
	std::cout << "A " << getAnimalName(Animal::CHICKEN) << " has " << printNumberOfLegs(Animal::CHICKEN) << " legs.\n";
	return 0;
}