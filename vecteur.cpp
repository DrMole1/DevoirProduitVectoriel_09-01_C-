//=====================================
// Nom de fichier : vecteur.cpp
// Classe : CVecteur
// Auteur : Prob Bastien
// Date de Cr�ation : 09/01
// But : G�re les m�thodes relatives � la classe vecteur (constructeur, afficheur et prod)
//======================================

#include <iostream>
#include "vecteur.h"

CVecteur::CVecteur(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}

void CVecteur::afficherVecteur()
{
	std::cout << "X : " << this->m_fltX << std::endl;
	std::cout << "Y : " << this->m_fltY << std::endl;
	std::cout << "Z : " << this->m_fltZ << std::endl;
}

