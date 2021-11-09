// But : Utiliser les fichiers pour stocker les données des utilisateurs
// Calculer la moyenne du groupe d'étudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include <iostream>
#include <fstream>            // Bibliothèque pour utiliser les fonctions sur les fichiers
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");


   // Déclaration des constantes
   const string NOM_FICHIER = "Donnees.txt";
   const string RESULTAT = "Resultats.txt";
   const string TITRE = "Résultats du cours de programmation structurée";
   const string NOM_COL1 = "Nom de l'étudiant";
   const string NOM_COL2 = "Evaluation 1";
   const string NOM_COL3 = "Eval 2";
   const string NOM_COL4 = "Eval 3";
   const string NOM_COL5 = "Total";
   const string NOM_COL6 = "Résultats";
   const string OK = "Succès";
   const string KO = "Échec";
   const string STAT = "Statistiques";


   const char MOTIF1 = '-';
   const char MOTIF2 = ' ';

   const int PLUS = 3;
   const int COL1 = 25;
   const int COL2 = NOM_COL2.size() + PLUS;
   const int COL3 = NOM_COL3.size() + PLUS;
   const int COL4 = NOM_COL4.size() + PLUS;
   const int COL5 = NOM_COL5.size() + PLUS;
   const int COL6 = NOM_COL6.size() + PLUS;
   const int LARGEUR = COL1 + COL2+ COL3+ COL4+ COL5 + COL6;

   const int NOTE_PASSAGE = 60;

 
   // Déclaration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la mémoire
   ofstream canalSortie;


   // On se crée autant de variables qu'il a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examenFinal;
   double total;



   // Il faut initialiser la variable canalEntree : on utilise la fonction open, ce n'est pas le signe égal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);

   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      system("pause");
      exit(511);
   }

   // il faut initialiser le canalSortie pour l'associer au fichier Resultats.txt qui sera créé par la fonction open. Si le fichier existe déjà il sera automatiquement écrasé.
   canalSortie.open(RESULTAT, ios::out);
   if (!canalSortie)
   {
      cerr << "Erreur : le fichier " << RESULTAT << " n'a pas pu être créé. Vérifiez vos droits d'accès ou l'espace disque disponible." << endl;
      system("pause");
      exit(811);
   }

   cout << "Tout va pour le mieux !" << endl;

   /*
   -------------------------------------------------------------------------------------
                   Résultats du cours de programmation structurée
   -------------------------------------------------------------------------------------
   Nom étudiant                           Eval 1    Eval 2    Eval 3     Total Résultats 
   -------------------------------------------------------------------------------------
    
   
   */


   // Écrire l'en-tête dans le fichier de sortie
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << TITRE << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << setfill(MOTIF2) << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4;
   canalSortie << setw(COL5) << NOM_COL5 << setw(COL6) << NOM_COL6 << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;





   // On va lire le premier enregistrement mais il se peut que le fichier soit vide et que le premier enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas sûr du succès
   getline(canalEntree, etudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;
   // On doit enlever le retour à la ligne dans le fichier de données.
   canalEntree.ignore(1, '\n');        // 1 et '\n' sont les valeurs par défaut, on n'est pas obligé de les mettre


   // On affiche le résultat si on a été capable de lire dans le fichier
   while (!canalEntree.eof())              // e end o of et f pour file eof() c'Est une fonction donc il faut des ()
   {
      total = examen1 + examen2 + examenFinal;
      canalSortie << setfill(MOTIF2) << left << setw(COL1) << etudiant << right << setw(COL2) << examen1 << setw(COL3) << examen2 << setw(COL4) << examenFinal;
      canalSortie << setw(COL5) << total << setw(COL6) << (  total >= NOTE_PASSAGE? OK : KO ) << endl;


      // On TENTE de lire le prochain enregistrement
      getline(canalEntree, etudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
      // On doit enlever le retour à la ligne dans le fichier de données.
      canalEntree.ignore();

   }

   // On va écrire le pied de page
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << STAT << endl;



   cout << "la fin du fichier a été atteinte" << endl;
   
 


   system("pause");
   return 0;
}