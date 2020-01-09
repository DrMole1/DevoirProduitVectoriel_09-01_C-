//=========================================
// Nom de fichier : matrice.h
// Classe : CMatrice
// Auteur : Prob Bastien
// Date de Cr�ation : 09/01
//=========================================


#pragma once
class CVecteur;

class CMatrice
{
	//Attributs membres de la classe
private:
	float valeursVecteur1[2];
	float valeursVecteur2[2];
	float valeursVecteur3[2];

	//M�thodes publiques membres de la classe
public:
	CMatrice(float flt1, float flt2, float flt3, float flt4, float flt5, float flt6, float flt7, float flt8, float flt9);
	void afficherMatrice();
	friend void prod(const CMatrice & matrice, const CVecteur & vecteur); //premi�re solution
	void prod(const CMatrice & matrice, const CVecteur & vecteur); //deuxi�me solution
};
