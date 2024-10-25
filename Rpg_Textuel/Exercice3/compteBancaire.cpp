#include "compteBancaire.h"

CompteBancaire::CompteBancaire(const std::string _titulaire, const float _sold) : titulaire(_titulaire), sold(_sold)
{
}

void CompteBancaire::retirer(const float _retire)
{
	sold -= _retire; 
}

void CompteBancaire::deposer(const float _depose)
{
	sold += _depose; 
}

float CompteBancaire::afficheSolde()
{
	return sold; 
}
