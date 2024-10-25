#include <iostream>
#include <string>
#include <vector>

class Etudiant
{
	std::string nom;
	std::string prenom; 
	std::vector<float> note; 

public: 
	Etudiant(const std::string _nom, const std::string _prenom, std::vector<float> _note);
	std::string getName(); 
	float calculMoyenne(); 

};