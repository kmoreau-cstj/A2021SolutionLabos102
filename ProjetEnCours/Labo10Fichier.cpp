// But : Utiliser les fichiers pour stocker les donn�es des utilisateurs
// Calculer la moyenne du groupe d'�tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include <iostream>
#include <fstream>            // Biblioth�que pour utiliser les fonctions sur les fichiers
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");


   // D�claration des constantes
   const string NOM_FICHIER = "Donnees.txt";
 
   // D�claration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la m�moire

   // On se cr�e autant de variables qu'il a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examenFinal;



   // Il faut initialiser la variable canalEntree : on utilise la fonction open, ce n'est pas le signe �gal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);

   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifiez son nom, son emplacement ou vos droits d'acc�s." << endl;
      system("pause");
      exit(511);
   }

   cout << "Tout va pour le mieux !" << endl;

   // On va lire le premier enregistrement mais il se peut que le fichier soit vide et que le premier enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas s�r du succ�s
   getline(canalEntree, etudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;

   // On affiche le r�sultat si on a �t� capable de lire dans le fichier
   while (!canalEntree.eof())              // e end o of et f pour file eof() c'Est une fonction donc il faut des ()
   {
      cout << "Apr�s la lecture :" << endl;
      cout << etudiant << " " << examen1 << " " << examen2 << " " << examenFinal << endl;

      // On TENTE de lire le prochain enregistrement
      getline(canalEntree, etudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;

   }
   cout << "la fin du fichier a �t� atteinte" << endl;
   
 


   system("pause");
   return 0;
}