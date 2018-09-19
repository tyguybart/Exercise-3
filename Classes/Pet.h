#ifndef pet_h
#define pet
#include <string>
using std::string;

class Pet
{
public:
	Pet();
	Pet(int id, string name, string species);
	~Pet();

	int getID() { return this->ID; }
	void setID(int id) { this->ID = id; }
	string getName() { return this->name; }
	void setName(string name) { this->name = name; }
	string getSpecies() { return this->species; }
	void setSpecies(string species) { this->species = species; }

private:
	int ID;
	string name;
	string species;
};

#endif