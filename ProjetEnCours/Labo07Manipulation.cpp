// But : Utiliser des fonctions pour aligner correctement du texte dans la console en utilisant la bibliothèque iomanip
// Auteur : Karine Moreau
// Date : 2021-10-25

#include "Labo07Fonction.h"

int main()
{
   setlocale(LC_ALL, "");
   // déclaration des variables
   
   int a = 11;
   int b = 123;
   int c = 1023;
   int d = 95670;
   char motif;
   // Demander a l'utilisateur un titre
   string Titre;
   cout << "Veuillez entrer le motif que vous voulez pour le titre: ";
   cin >> motif;

   cin.ignore(1, '\n');

   cout << "Veuillez entrer un titre : ";
   getline(cin, Titre, '\n');

   system("cls");

   centrerTitre(Titre, LARGEUR_COL1 + LARGEUR_COL2 + 3, motif, true);

   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de a  " << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de b  " << " : " << right << setfill('.') << setw(LARGEUR_COL2) << b << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de c  " << " : " << right << setfill('.') << setw(LARGEUR_COL2) << c << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de d  " << " : " << right << setfill('.') << setw(LARGEUR_COL2) << d << endl;
   cout << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2 + 3) << "-" << endl;  //+3 Car 3 caractères de plus pour : 
   /*
   PAS BON !!!!!!
   cout << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2 + 4) << "\n"; PAS CLAIRE LE + 4 ET \n PREND UNE PLACE 
   cout << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2 + 3) << endl; NE FAIT PAS DE TIRET

   CORRECT
   cout << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2 + 3) << "" << endl; 
   */
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Somme  " << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a + b + c + d << endl;
   cout << setfill(motif) << setw(LARGEUR_COL1 + LARGEUR_COL2 + 3) << "" << endl;






   system("pause");
   return 0;
}