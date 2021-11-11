// But : Utiliser les fichiers pour stocker les données des utilisateurs
// Calculer la moyenne du groupe d'étudiants
// Auteur : Cédrick Robichaud
// Date : 2021-11-11

#include <iostream>
#include <fstream>            // Bibliothèque pour utiliser les fonctions sur les fichiers
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
 

   // Déclaration des constantes

   const int PLUS = 0;
   const int COL1 = 5;
   const int LARGEUR = COL1;

   const string NOM_FICHIER = "Exercice1.txt";
   const char MOTIF1 = '*';

   // Déclaration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la mémoire


   // On se crée autant de variables qu'il a de champs(colonnes) dans chaque enregistrement
   int nombre;



   // Il faut initialiser la variable canalEntree : on utilise la fonction open, ce n'est pas le signe égal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);

   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      system("pause > NULL"); // ROCK
      exit(511);
   }

   //On TENTE de lire le premier enregistrement

   
   canalEntree >> nombre;
   while (!canalEntree.eof())
   {
      cout << nombre << endl;
      //Tenter de lire l'enregistrement suivant
      canalEntree >> nombre;
   }
   



   canalEntree.close();
 

   system("pause > NULL");
   return 0;
}