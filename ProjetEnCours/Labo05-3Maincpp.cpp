// But : Développer une série de fonctions et de les tester
// Auteur : Karine Moreau
// Date : 2021-09-28

#include <iostream>
#include"LabosFonctions05.h"
using namespace std;

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // Déclaration des variables
   int nb;
   int nb1;
   int nb2;
   int nb3;
   int jour;
   int mois;
   int annee;


   cout << " ============= Test de la fonction dit oui ou non (vrai ou faux, ou true ou false) si son paramètre est pair ============" << endl;
   cout << "Veuillez entrer un nombre entier : ";
   cin >> nb;

   // appel de la fonction pour dire si le nb est pair ou impair
   
   if (savoirSiPair(nb))
   {
      cout << nb << " est pair " << endl;
   }
   else
   {
      cout << nb << " est impair " << endl;
   }
  




   /*


   // La fonction prend en paramètre le numéro du jour, le numéro du mois et l'année : 30, 9, 2021 ==> 30 septembre 2021
   cout << " ============= Test de la fonction qui affiche le mois d'une date en toute lettre ============" << endl;
   cout << "Veuillez entrer un numéro du jour : ";
   cin >> jour;

   cout << "Veuillez entrer un numéro du mois : ";
   cin >> mois;

   cout << "Veuillez entrer l'année : ";
   cin >> annee;

   // appel de la fonction en lui passant les valeurs des paramètres




   /*
   cout << " ============= Test de la fonction qui calcule le max de trois nombres ============" << endl;
   cout << "Veuillez entrer un nombre entier : ";
   cin >> nb1;
   cout << "Veuillez entrer un nombre entier : ";
   cin >> nb2;
   cout << "Veuillez entrer un nombre entier : ";
   cin >> nb3;


   cout << "Le maximum des trois nombres entiers est " << CalculerMax(nb1, nb2, nb3) << endl;

   cout << " ============= Test de la fonction qui calcule la factorielle d'un nombre entier positif ============" << endl;
   cout << "Veuillez entrer un nombre entier positif : ";

   cin >> nb;

   cout << "La factorielle de " << nb << " est de " << factorielle(nb) << endl;
   */


 


   system("pause");



}
// plan de test
//  







