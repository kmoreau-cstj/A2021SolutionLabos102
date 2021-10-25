#pragma once
// Liste des includes
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Liste des constantes
const int LARGEUR_COL1 = 25;
const int LARGEUR_COL2 = 15;
// DANS LE .h ON N'A PAS LA LISTE DES VARIABLES, CAR LEUR CONTENU PEUT ÊTRE CHANGÉ PAR N'INPOTRE QUELLE FONCTION

//Liste des prototypes des fonctions

void centrerTitre(string Titre, int largeur, char remplissage,bool avecEndl);