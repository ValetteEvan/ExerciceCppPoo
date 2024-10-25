#include "livres.h"

Livre::Livre(const std::string _auteur, const std::string _titre, const int _annee) : auteur(_auteur), titre(_titre),annee(_annee)
{
}

void Livre::descLivre()
{
	std::cout << "Titre :" << titre << std::endl; 
	std::cout << "Auteur :" << auteur << std::endl; 
	std::cout << "Annee :" << annee << std::endl; 
}
