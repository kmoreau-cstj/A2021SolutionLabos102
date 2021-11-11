// But : Utiliser les fichiers pour stocker les donn�es des utilisateurs
// Calculer la moyenne du groupe d'�tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include <iostream>
#include <fstream>            // Biblioth�que pour utiliser les fonctions sur les fichiers
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");


   // D�claration des constantes
   const string NOM_FICHIER = "Donnees.txt";
   const string RESULTAT = "Resultats.txt";
   const string TITRE = "R�sultats du cours de programmation structur�e";
   const string NOM_COL1 = "Nom de l'�tudiant";
   const string NOM_COL2 = "Evaluation 1";
   const string NOM_COL3 = "Eval 2";
   const string NOM_COL4 = "Eval 3";
   const string NOM_COL5 = "Total";
   const string NOM_COL6 = "R�sultats";
   const string OK = "Succ�s";
   const string KO = "�chec";
   const string STAT = "Statistiques";
   const string MOYENNE = "Moyenne";


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

 
   // D�claration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la m�moire
   ofstream canalSortie;


   // On se cr�e autant de variables qu'il a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examenFinal;



   double total;
   double moyenne1 = 0;
   double moyenne2 = 0;
   double moyenne3 = 0;
   double moyenneTotal = 0;
   int nbEtudiant = 0;



   // Il faut initialiser la variable canalEntree : on utilise la fonction open, ce n'est pas le signe �gal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);

   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifiez son nom, son emplacement ou vos droits d'acc�s." << endl;
      system("pause");
      exit(511);
   }

   // il faut initialiser le canalSortie pour l'associer au fichier Resultats.txt qui sera cr�� par la fonction open. Si le fichier existe d�j� il sera automatiquement �cras�.
   canalSortie.open(RESULTAT, ios::out);
   if (!canalSortie)
   {
      cerr << "Erreur : le fichier " << RESULTAT << " n'a pas pu �tre cr��. V�rifiez vos droits d'acc�s ou l'espace disque disponible." << endl;
      system("pause");
      exit(811);
   }

   cout << "Tout va pour le mieux !" << endl;

   // On formate l'affiche des nombres � virgule pour avoir syst�matiquement 2 chiffres apr�s la virgule.
   // Par d�faut le format pour les nombres � virgule est le format scientifique. la virgule se d�place tout le temps
   // 123.456 => 1.23456e2
   // L'autre mode est le mode fixed, donc la virgule ne bouge plus
   // 123.456  => 123.456
   // 1234.567 => 1234.57
   // par d�faut la console affiche 6 chiffres significatifs (partie enti�re + partie d�cimale)

   
   // Pour avoir deux chiffres apr�s la virgule
   canalSortie << fixed << setprecision(2);

   /*
   -------------------------------------------------------------------------------------
                   R�sultats du cours de programmation structur�e
   -------------------------------------------------------------------------------------
   Nom �tudiant                           Eval 1    Eval 2    Eval 3     Total R�sultats 
   -------------------------------------------------------------------------------------
    
   
   */


   // �crire l'en-t�te dans le fichier de sortie
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << TITRE << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << setfill(MOTIF2) << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4;
   canalSortie << setw(COL5) << NOM_COL5 << setw(COL6) << NOM_COL6 << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;





   // On va lire le premier enregistrement mais il se peut que le fichier soit vide et que le premier enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas s�r du succ�s
   getline(canalEntree, etudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;
   // On doit enlever le retour � la ligne dans le fichier de donn�es.
   canalEntree.ignore(1, '\n');        // 1 et '\n' sont les valeurs par d�faut, on n'est pas oblig� de les mettre


   // On affiche le r�sultat si on a �t� capable de lire dans le fichier
   while (!canalEntree.eof())              // e end o of et f pour file eof() c'Est une fonction donc il faut des ()
   {
      // ICI ON traite les donn�es  : faire des calculs au d�but de la boucle
      total = examen1 + examen2 + examenFinal;
      canalSortie << setfill(MOTIF2) << left << setw(COL1) << etudiant << right << setw(COL2) << examen1 << setw(COL3) << examen2 << setw(COL4) << examenFinal;
      canalSortie << setw(COL5) << total << setw(COL6) << (  total >= NOTE_PASSAGE? OK : KO ) << endl;
      moyenne1 += examen1;
      moyenne2 += examen2;
      moyenne3 += examenFinal;
      moyenneTotal += total;
      // On a un �tuidiant de plus
      nbEtudiant++;

      // On TENTE de lire le prochain enregistrement
      getline(canalEntree, etudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
      // On doit enlever le retour � la ligne dans le fichier de donn�es.
      canalEntree.ignore();

   }

   // Calcul de la moyenne
   if (nbEtudiant > 0)
   {
      moyenne1 /= nbEtudiant;
      moyenne2 /= nbEtudiant;
      moyenne3 /= nbEtudiant;
      moyenneTotal /= nbEtudiant;
   }



   // On va �crire le pied de page
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << STAT << endl;
   canalSortie << setfill(MOTIF2) << left << setw(COL1) << MOYENNE << right  << setw(COL2) << moyenne1 << setw(COL3) << moyenne2 << setw(COL4) << moyenne3 << setw(COL5) << moyenneTotal << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;



   cout << "la fin du fichier a �t� atteinte" << endl;
   canalEntree.close();
   canalSortie.close();    // Cela force le SE � �crire les donn�es sur le disque dur.

 


   system("pause");
   return 0;
}