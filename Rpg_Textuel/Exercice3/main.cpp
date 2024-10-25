#include <iostream>
#include <string>
#include "compteBancaire.h"

int main()
{
	std::string name = { "Evan" }; 
	float sold = 500.50f; 

	CompteBancaire perso{ name,sold }; 
	std::cout << "------------------------\n"; 
	std::cout << "Votre sold :" << perso.afficheSolde() << std::endl;
	std::cout << "Montant a retirer : "; 
	float tmp; 
	std::cin >> tmp; 
	perso.retirer(tmp); 
	std::cout << "------------------------\n";
	std::cout << "Votre sold :" << perso.afficheSolde() << std::endl;
	std::cout << "Montant a deposer : "; 
	float tmp2; 
	std::cin >> tmp2; 
	perso.deposer(tmp2); 
	std::cout << "------------------------\n";
	std::cout << "Votre sold :" << perso.afficheSolde() << std::endl; 

	return 0; 
}