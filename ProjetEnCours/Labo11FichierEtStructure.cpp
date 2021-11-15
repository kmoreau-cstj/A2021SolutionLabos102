// But : Utiliser les fichiers pour stocker les donn�es des utilisateurs
// Calculer la moyenne du groupe d'�tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include "Labo11Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
    
   // D�claration des variables
   ifstream canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);        // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la m�moire
   ofstream canalSortie = ouvrirFichierEnEcriture(RESULTAT);

   info unEtudiantEtSesNotes;
   stats totalMoyennes;


 


   cout << "Tout va pour le mieux !" << endl;

   ecrireEnTete(canalSortie, 1);

   lireEnregistrement(canalEntree, unEtudiantEtSesNotes);

   // On affiche le r�sultat si on a �t� capable de lire dans le fichier
   while (!canalEntree.eof())              // e end o of et f pour file eof() c'Est une fonction donc il faut des ()
   {
      // ICI ON traite les donn�es  : faire des calculs au d�but de la boucle
      calculerResultats(unEtudiantEtSesNotes, totalMoyennes);

      canalSortie << setfill(MOTIF2) << left << setw(COL1) << unEtudiantEtSesNotes.etudiant << right << setw(COL2) << unEtudiantEtSesNotes.examen1 << setw(COL3) << unEtudiantEtSesNotes.examen2 << setw(COL4) << unEtudiantEtSesNotes.examenFinal;
      canalSortie << setw(COL5) << totalMoyennes.total << setw(COL6) << (totalMoyennes.total >= NOTE_PASSAGE? OK : KO ) << endl;

      unEtudiantEtSesNotes = lireEnregistrement(canalEntree);

   }

   // Calcul de la moyenne
   if (totalMoyennes.nbEtudiant > 0)
   {
      totalMoyennes.moyenne1 /= totalMoyennes.nbEtudiant;
      totalMoyennes.moyenne2 /= totalMoyennes.nbEtudiant;
      totalMoyennes.moyenne3 /= totalMoyennes.nbEtudiant;
      totalMoyennes.moyenneTotal /= totalMoyennes.nbEtudiant;
   }



   // On va �crire le pied de page
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canalSortie << STAT << endl;
   canalSortie << setfill(MOTIF2) << left << setw(COL1) << MOYENNE << right  << setw(COL2) << totalMoyennes.moyenne1 << setw(COL3) << totalMoyennes.moyenne2 << setw(COL4) << totalMoyennes.moyenne3 << setw(COL5) << totalMoyennes.moyenneTotal << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;



   cout << "la fin du fichier a �t� atteinte" << endl;
   canalEntree.close();
   canalSortie.close();    // Cela force le SE � �crire les donn�es sur le disque dur.

 


   system("pause");
   return 0;
}