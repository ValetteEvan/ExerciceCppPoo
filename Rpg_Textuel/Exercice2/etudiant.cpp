#include "etudiant.h"

Etudiant::Etudiant(const std::string _nom, const std::string _prenom, std::vector<float> _note) : nom(_nom), prenom(_prenom), note(_note)
{
   
}

std::string Etudiant::getName()
{
    return nom; 
}

float Etudiant::calculMoyenne()
{
    int size = note.size(); 
    float tmp = 0; 
    for (int i = 0; i < size; i++) 
    {
        tmp += note[i];  
    }
    float resulta = tmp / size; 
    return resulta ;
}
