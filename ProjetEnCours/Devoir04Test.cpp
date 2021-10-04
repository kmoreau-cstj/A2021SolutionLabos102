// But : Développer une série de fonctions et de les tester
// Écrire une fonction qui permet de calculer la moyenne des notes entrées par l’utilisateur. Le nombre de notes est
// passé en paramètre à la fonction.Cette fonction n’affiche pas le résultat, elle doit le retourner.Le main est
// responsable de fournir le nombre de notes qui sera demandé à l’utilisateur et d’afficher la moyenne obtenue.
// 
// 
// 
// 
// Écrire une fonction qui reçoit trois paramètres, le numéro du jour, le numéro du mois et l’année. A partir de ces
//informations, la fonction retourne vrai si la date est une date valide et faux dans le cas contraire.Le main demande
//ces trois valeurs à l’utilisateur tant que ces valeurs ne forment pas une date valide.
// 
// 
// 
// 
// 
// 
// 
// 
// Auteur : Karine Moreau
// Date : 2021-09-28

#include <iostream>
#include "Devoir04.h"
using namespace std;

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // déclarer les variables
   int jour;
   int mois;
   int annee;

   
   cout << "Veuillez entrer le jour" << endl;
   cin >> jour;
   cout << "Veuillez entrer le mois" << endl;
   cin >> mois;
   cout << "Veuillez entrer le annee" << endl;
   cin >> annee;

   while (!ValiderDate(jour,mois,annee))
   {
      cout << "ERRORERRORERRORERRORERRORERROR invalide date idiot" << endl;
      
      cout << "Veuillez entrer le jour" << endl;
      cin >> jour;
      cout << "Veuillez entrer le mois" << endl;
      cin >> mois;
      cout << "Veuillez entrer le annee" << endl;
      cin >> annee;
   } 
   cout << "La date est valide"; 









   /*int NbNotes;

   cout << "veuillez entrer le  nombre de notes qui sera demander a l'utilisateur : ";
   cin >> NbNotes;
   
      while (NbNotes <= 0)
      {
         cout << " Le nombre de note ne peut pas être inférieur ou égale à 0 " << endl ;
         cin >> NbNotes;
      }

   cout << " la moyenne obtenue est de : " << CalculerMoyenne(NbNotes) << endl ;
   



   */
   system("pause");



}
// plan de test
//  







