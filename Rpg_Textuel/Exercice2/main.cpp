#include <iostream>
#include <string>
#include <vector>
#include "etudiant.h"

int main()
{
	std::vector<float> notes = {20.f,20.f,20.f};
	
	const std::string nom = "Valette"; 
	const std::string prenom = "Evan"; 
	
	Etudiant etudiant1{ nom,prenom,notes }; 
	std::cout << "Moyenne de " << etudiant1.getName() << " est de :" << etudiant1.calculMoyenne() << std::endl;  


	return 0; 
}