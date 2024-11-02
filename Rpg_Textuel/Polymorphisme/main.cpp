#include <iostream>
#include <string>
#include <vector>
#include "Figure.hpp"

int main()
{
	
	std::vector<Figure*> listeFigure; 
	listeFigure.push_back(new Carre(23));
	listeFigure.push_back(new Rectangle(23,12));
	listeFigure.push_back(new Cercle(35));
	listeFigure.push_back(new Triangle(23,45));
	
	for (int i = 0; i < listeFigure.size(); i++)
	{
		std::cout << "----------------\n"; 
		listeFigure[i]->afficher(); 
		listeFigure[i]->perimetre(); 
		listeFigure[i]->aire(); 
		std::cout << "----------------\n";
	}

}