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
// Surcharge de fonction est possible si dans la liste des paramètres il y a une différence (type d'un paramètre, ou le nombre de paramètres)
void afficherVecteur(const vector<int>& vecAAfficher, bool commenceAZero);
void afficherVecteur(vector<float> vecAAfficher, bool commenceAZero);
void afficherVecteur(vector<char> vecAAfficher, bool commenceAZero);
void afficherVecteur(vector<string> vecAAfficher, bool commenceAZero);
void afficherVecteur(vector<double> vecAAfficher, bool commenceAZero);




void afficherContenuPairouImpair(vector<int> vecAAfficher, bool commenceAZero, bool lesPairs);
void afficherVecteurParLaFin(vector<int> vecAAfficher, bool commenceAZero);

void supprimerValeur(vector<int>& vecASupprimer, int valeurASupprimer); 
vector<int> supprimerValeur2(vector<int> vecASupprimer, int valeurASupprimer);

void echangerValeur(int& verreBleu, int& verreRouge);