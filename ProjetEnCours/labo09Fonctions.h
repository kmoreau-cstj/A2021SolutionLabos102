#pragma once

// Id�e originale de Rapha�l
 
// Liste des includes

#include <iostream>
#include <vector>
#include <string>

using namespace std;



// Liste des constantes


// Liste des prototypes

// Cette fonction re�oit deux param�tres : le vecteur et la valeur � comptabiliser (Rock)
// Elle retourne le nombre de la valeur cherch�e (proposition de C�drick)
int calculerFrequence(vector<int> vecInt, int valeurCherchee);

// Nom des param�tres (F�lix)
void afficherVecteur(vector<int> vecAAfficher, bool commenceAZero);
void afficherContenuPairouImpair(vector<int> vecAAfficher, bool commenceAZero, bool lesPairs);
void afficherVecteurParLaFin(vector<int> vecAAfficher, bool commenceAZero);