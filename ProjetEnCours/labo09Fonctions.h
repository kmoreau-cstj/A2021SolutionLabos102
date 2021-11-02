#pragma once

// Idée originale de Raphaël
 
// Liste des includes

#include <iostream>
#include <vector>
#include <string>

using namespace std;



// Liste des constantes


// Liste des prototypes

// Cette fonction reçoit deux paramètres : le vecteur et la valeur à comptabiliser (Rock)
// Elle retourne le nombre de la valeur cherchée (proposition de Cédrick)
int calculerFrequence(vector<int> vecInt, int valeurCherchee);

// Nom des paramètres (Félix)
void afficherVecteur(vector<int> vecAAfficher, bool commenceAZero);
void afficherContenuPairouImpair(vector<int> vecAAfficher, bool commenceAZero, bool lesPairs);
void afficherVecteurParLaFin(vector<int> vecAAfficher, bool commenceAZero);