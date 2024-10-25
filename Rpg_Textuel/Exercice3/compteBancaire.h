#pragma once
#include <iostream>
#include <string>

class CompteBancaire
{
	std::string titulaire; 
	float sold; 

public: 
	CompteBancaire(const std::string _titulaire, const float _sold);
	void retirer(const float _retire); 
	void deposer(const float _depose); 
	float afficheSolde(); 
};
