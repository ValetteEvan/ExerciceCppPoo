#include "Figure.hpp"

Figure::Figure()
{
}

void Figure::afficher() const
{
	std::cout << "Je suis une Figure" << std::endl;  
}

//TRIANGLE ------------------------------||
Triangle::Triangle(int base, int hauteur) : m_base(base), m_hauteur(hauteur) 
{
}

void Triangle::afficher() const 
{
	std::cout << "Ceci est un triangle !" << std::endl;  
}

void Triangle::perimetre()
{
	
}

void Triangle::aire()
{
}

//CARRE ---------------------------------||

Carre::Carre(int longueur) : m_longueur(longueur) 
{
	
}

void Carre::afficher() const
{
	std::cout << "Ceci est un Carre !" << std::endl;
}

void Carre::perimetre()
{
}

void Carre::aire()
{
}

//Rectangle ------------------------------||
Rectangle::Rectangle(int longueur, int largeur) : m_longueur(longueur), m_largeur(largeur)
{
}

void Rectangle::afficher() const
{
	std::cout << "Ceci est un Rectangle !" << std::endl;
}

void Rectangle::perimetre()
{
	std::cout << "Flemme de calculer le perimetre" << std::endl; 
}

void Rectangle::aire()
{
}

//CERCLE ---------------------------------||

Cercle::Cercle(int rayon) : m_rayon(rayon)
{
}

void Cercle::afficher() const
{
	std::cout << "Ceci est un Cercle !" << std::endl;
}

void Cercle::perimetre()
{
}

void Cercle::aire()
{
	std::cout << "Flemme de calculer l'aire" << std::endl; 
}
