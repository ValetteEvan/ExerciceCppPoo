#include <iostream>
#include <string>
#include <vector>
#include "livres.h"

int main()
{
	Livre bookMain{"Renard des bois","Valette Evan",2024}; 
	Livre bookMain2{ "After","Todd Anna",2012};
	Livre bookMain3{ "Qui est tu Alaska","John Green",2005 };  

	std::vector<Livre> book; 
	book.push_back(bookMain); 
	book.push_back(bookMain2);
	book.push_back(bookMain3); 

	for (int i = 0; i < book.size(); i++)
	{
		std::cout << "--------------------\n"; 
		book[i].descLivre(); 
		std::cout << "--------------------\n"; 
	}


	return 0; 
}