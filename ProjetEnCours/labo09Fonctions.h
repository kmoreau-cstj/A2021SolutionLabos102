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
// Surcharge de fonction est possible si dans la liste des param�tres il y a une diff�rence (type d'un param�tre, ou le nombre de param�tres)
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