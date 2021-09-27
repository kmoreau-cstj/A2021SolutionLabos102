// But : creer nos propres fonctions dans une bibliothèque
// 1. il faut déclarer le prototype de la fonction dans une bibliothèque : donner un nom à une nouvelle fonction
// 2. il faut définir la fonction : il faut coder les instructions pour créer la fonction
// 3. il faut appeler la fonction  pour l'exécuter
// demander à l'utilisateur un nombre 
// le programme appelle une fonction pour calculer le carré du nombre. Cette fonction doit être codée par nous-même
// Auteur : Karine Moreau
// Date : 2021-09-27

#include <iostream>
#include "Labo05FonctionMath.h"



using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // Déclaration des variables
   double nb;
  

   cout << "Veuillez entrer un nombre : ";
   cin >> nb;
 
   cout << "Le carré de " << nb << " est " << calculerCarre(nb) << endl;


   system("pause");

}
// plan de test
//  







