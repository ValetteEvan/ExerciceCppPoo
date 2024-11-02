#include <iostream>
#include <string>

class Figure
{
public: 
	Figure(); 
	virtual void afficher()const; 
	virtual void perimetre() = 0; 
	virtual void aire() = 0; 
};

class Triangle : public Figure
{
	int m_base; 
	int m_hauteur; 
public: 
	Triangle(int base,int hauteur); 
	void afficher()const;
	void perimetre();
	void aire();
};

class Carre : public Figure
{
	int m_longueur; 
public:
	Carre(int longueur);  
	void afficher()const;
	void perimetre();
	void aire();
};

class Rectangle : public Figure
{
	int m_longueur; 
	int m_largeur; 
public:
	Rectangle(int longueur,int largeur); 
	void afficher()const;
	void perimetre();
	void aire();
};

class Cercle : public Figure 
{
	int m_rayon;
public:
	Cercle(int rayon); 
	void afficher()const;
	void perimetre();
	void aire();
};