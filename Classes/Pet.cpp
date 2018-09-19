#include "pch.h"
#include "Pet.h"


Pet::Pet()
{
	this->ID = 0;
	this->name = "Un-Named";
	this->species = "N/A";
}

Pet::Pet(int id, string name, string species)
{
	this->ID = id;
	this->name = name;
	this->species = species;
}


Pet::~Pet()
{
}
