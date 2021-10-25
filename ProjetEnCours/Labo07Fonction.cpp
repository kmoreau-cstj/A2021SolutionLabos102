#include "Labo07Fonction.h"

void centrerTitre(string Titre, int largeur, char remplissage, bool avecEndl)
{
   cout << setfill(remplissage) << setw((largeur - Titre.length()) / 2) << "" << Titre << setfill(remplissage) << setw((largeur - Titre.length()) / 2) << "" << (avecEndl ? "\n" : "");
}
