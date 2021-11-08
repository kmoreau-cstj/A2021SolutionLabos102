// But : Utiliser les fichiers pour stocker les données des utilisateurs
// Calculer la moyenne du groupe d'étudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include <iostream>
#include <fstream>            // Bibliothèque pour utiliser les fonctions sur les fichiers
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");


   // Déclaration des constantes
   const string NOM_FICHIER = "Donnees.txt";
 
   // Déclaration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la mémoire

   // On se crée autant de variables qu'il a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examenFinal;



   // Il faut initialiser la variable canalEntree : on utilise la fonction open, ce n'est pas le signe égal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);

   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      system("pause");
      exit(511);
   }

   cout << "Tout va pour le mieux !" << endl;

   // On va lire le premier enregistrement mais il se peut que le fichier soit vide et que le premier enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas sûr du succès
   getline(canalEntree, etudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;

   // On affiche le résultat si on a été capable de lire dans le fichier
   while (!canalEntree.eof())              // e end o of et f pour file eof() c'Est une fonction donc il faut des ()
   {
      cout << "Après la lecture :" << endl;
      cout << etudiant << " " << examen1 << " " << examen2 << " " << examenFinal << endl;

      // On TENTE de lire le prochain enregistrement
      getline(canalEntree, etudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;

   }
   cout << "la fin du fichier a été atteinte" << endl;
   
 


   system("pause");
   return 0;
}