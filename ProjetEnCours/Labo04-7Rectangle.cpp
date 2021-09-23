// But : Demander à l'utilisateur deux nombres : un pour la longueur et l'autre pour la hauteur
// Le programme dessine un rectangle de longueur par hauteur
// 
// Par exemple : longueur = 4 hauteur = 3
// ****
// ****
// ****
// 
// Auteur : Karine Moreau
// Date : 2021-09-20




#include <iostream>


using namespace std;


void main()
{
  // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // Déclaration des variables
   int longueur;
   int hauteur;

   cout << "Veuillez entrer la longueur : ";
   cin >> longueur;
   cout << "Veuillez entrer la hauteur : ";
   cin >> hauteur;


   // TODO : dessiner les étoiles pour faire la forme rectangulaire avec deux boucles for
   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int nbEtoile = 1; nbEtoile <= longueur; nbEtoile++)
      {
         cout << "*";
      }
      cout << endl;

   }

 
  

   system("pause");

}
// plan de test
//  







