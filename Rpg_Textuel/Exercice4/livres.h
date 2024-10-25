#pragma once
#include <iostream>
#include <string>

class Livre
{
	std::string auteur; 
	std::string titre; 
	int annee; 
public: 
	Livre() = default; 
	Livre(const std::string _auteur, const std::string _titre, const int _annee); 
	void descLivre(); 
};
