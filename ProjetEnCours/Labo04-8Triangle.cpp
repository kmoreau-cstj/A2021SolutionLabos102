// But : Demander à l'utilisateur un nombre :  pour la hauteur du triangle
// Le programme dessine un triangle de hauteur
// 
// Par exemple :  hauteur = 5
// *
// **
// ***
// ****
// *****
// 
// 1*****
// 2****
// 3***
// 4**
// 5*
// 
//     *
//    **
//   ***
//  ****
// *****
// 
// 
// *****
//  ****
//   ***
//    **
//     *
// 
// 
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
  
   int hauteur;

 
   cout << "Veuillez entrer la hauteur : ";
   cin >> hauteur;


   // TODO : dessiner les étoiles pour faire la forme rectangulaire avec deux boucles for
   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int nbEtoile = 1; nbEtoile <= ligne; nbEtoile++)
      {
         cout << "*";
      }
      cout << endl;

   }

   cout << endl;


   // TODO : dessiner les étoiles pour faire la forme rectangulaire avec deux boucles for
   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int nbEtoile = 1; nbEtoile <= hauteur - ligne + 1; nbEtoile++)
      {
         cout << "*";
      }
      cout << endl;

   }
  

   cout << endl;


   // TODO : dessiner les étoiles pour faire la forme rectangulaire avec deux boucles for
   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int nbEtoile = 1; nbEtoile <= hauteur; nbEtoile++)
      {
         // TODO : il faut faire un test pour savoir si on met un espace ou une étoile
         if (nbEtoile < hauteur - ligne + 1)
         {
            cout << " ";
         }
         else
         {
            cout << "*";
         }
         
      }
      cout << endl;

   }

   cout << endl;


   // TODO : dessiner les étoiles pour faire la forme rectangulaire avec deux boucles for
   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int nbEtoile = 1; nbEtoile <= hauteur; nbEtoile++)
      {
         // TODO : il faut faire un test pour savoir si on met un espace ou une étoile
         if (nbEtoile < ligne )
         {
            cout << " ";
         }
         else
         {
            cout << "*";
         }

      }
      cout << endl;

   }


   system("pause");

}
// plan de test
//  







