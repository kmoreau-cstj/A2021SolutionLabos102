// But : Ecrire un programme qui demande trois entiers et qui affiche le plus grand des 3.
// Auteur : 
// Date : 2021-09-03

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // Déclaration des variables
   
   int Nb1;
   int Nb2;
   int Nb3;

   // Demander un nombre a l'utilisateur

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> Nb1; 

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> Nb2;

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> Nb3;

   if (Nb1 >= Nb2 && Nb1 >= Nb3)
   {
      std::cout << Nb1 << " est le plus grand \n";

   }
   else
   {
      if (Nb2 >= Nb1 && Nb2 >= Nb3)
      {
         std::cout << Nb2 << " est le plus grand \n";
      }
      else
      {
         if (Nb3 >= Nb1 && Nb3 >= Nb2)
         {
            std::cout << Nb3 << " est le plus grand \n";
         }
      }
   }

   
   system("pause");

   // plan de test
  




}


