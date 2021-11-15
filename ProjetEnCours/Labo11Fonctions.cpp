#include "Labo11Fonctions.h"

ifstream ouvrirFichierEnLecture(string nomFichier)
{
   ifstream canal;
   
   
   // Il faut initialiser la variable canalEntree : on utilise la fonction open, ce n'est pas le signe égal comme pour initialiser un entier
   canal.open(nomFichier, ios::in);

   if (!canal)
   {
      cerr << "Erreur : Le fichier " << nomFichier << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      system("pause");
      exit(511);
   }
   
   return canal;
}

ofstream ouvrirFichierEnEcriture(string nomFichier)
{
   ofstream canal;
      
   // il faut initialiser le canalSortie pour l'associer au fichier Resultats.txt qui sera créé par la fonction open. Si le fichier existe déjà il sera automatiquement écrasé.
   canal.open(nomFichier, ios::out);
   if (!canal)
   {
      cerr << "Erreur : le fichier " << nomFichier << " n'a pas pu être créé. Vérifiez vos droits d'accès ou l'espace disque disponible." << endl;
      system("pause");
      exit(811);
   }
   
   return canal;
}

void ecrireEnTete(ofstream& canal, int nbDecimales)
{
   // On formate l'affiche des nombres à virgule pour avoir systématiquement 2 chiffres après la virgule.
  // Par défaut le format pour les nombres à virgule est le format scientifique. la virgule se déplace tout le temps
  // 123.456 => 1.23456e2
  // L'autre mode est le mode fixed, donc la virgule ne bouge plus
  // 123.456  => 123.456
  // 1234.567 => 1234.57
  // par défaut la console affiche 6 chiffres significatifs (partie entière + partie décimale)


  // Pour avoir nbDecimales chiffres après la virgule
   canal << fixed << setprecision(nbDecimales);

   /*
   -------------------------------------------------------------------------------------
                   Résultats du cours de programmation structurée
   -------------------------------------------------------------------------------------
   Nom étudiant                           Eval 1    Eval 2    Eval 3     Total Résultats
   -------------------------------------------------------------------------------------


   */

   // Écrire l'en-tête dans le fichier de sortie
   canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canal << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << TITRE << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << endl;
   canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
   canal << setfill(MOTIF2) << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4;
   canal << setw(COL5) << NOM_COL5 << setw(COL6) << NOM_COL6 << endl;
   canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;

}

void lireEnregistrement(ifstream& canal, info& EtudiantEnCours)
{
   // On va lire l'enregistrement mais il se peut que le fichier soit vide et que l'enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas sûr du succès
   getline(canal, EtudiantEnCours.etudiant, '\t');
   canal >> EtudiantEnCours.examen1;
   canal >> EtudiantEnCours.examen2;
   canal >> EtudiantEnCours.examenFinal;
   // On doit enlever le retour à la ligne dans le fichier de données.
   canal.ignore(1, '\n');        // 1 et '\n' sont les valeurs par défaut, on n'est pas obligé de les mettre


}

info lireEnregistrement(ifstream& canal)
{
   info EtudiantEnCours;
   
   // On TENTE de lire le prochain enregistrement
   getline(canal, EtudiantEnCours.etudiant, '\t');
   canal >> EtudiantEnCours.examen1;
   canal >> EtudiantEnCours.examen2;
   canal >> EtudiantEnCours.examenFinal;
   // On doit enlever le retour à la ligne dans le fichier de données.
   canal.ignore();
   return EtudiantEnCours;
}

void calculerResultats(info EtudiantEnCours, stats& resultats)
{
   resultats.total = EtudiantEnCours.examen1 + EtudiantEnCours.examen2 + EtudiantEnCours.examenFinal;
   resultats.moyenne1 += EtudiantEnCours.examen1;
   resultats.moyenne2 += EtudiantEnCours.examen2;
   resultats.moyenne3 += EtudiantEnCours.examenFinal;
   resultats.moyenneTotal += resultats.total;
   // On a un étudiant de plus
   resultats.nbEtudiant++;

}
