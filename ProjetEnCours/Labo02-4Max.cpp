// But : Ecrire un programme qui demande trois entiers et qui affiche le plus grand des 3.
// Auteur : 
// Date : 2021-09-03

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // Déclaration des variables
   

   int Nb2;
   int Nb3;
   // Déclarer la variable contenant le résultat : maximum
   int max;

   // Demander un nombre a l'utilisateur

   std::cout << "Veuillez inserer un nombre entier :"; 
   // Initialiser le maximum avec le premier nombre
   std::cin >> max; 

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> Nb2;

   // Si le nb2 est plus grand que le maximum, alors le maximum prend la valeur du nb2
   if (Nb2 > max)
   {
      max = Nb2;
   }

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> Nb3;

   // Si le nb3 est plus grand que le maximum, alors le maximum prend la valeur du nb3
   if (Nb3 > max)
   {
      max = Nb3;
   }


   // Afficher le résultat
   std::cout << "le plus grand nombre est : " << max <<"\n";
  
   
   system("pause");

   // plan de test
  
   //Max  |  Nb2  |  Nb3
   //1    
   //2        2
   //3        2       3
   //résultat: 3

   //Max  |  Nb2  |  Nb3
   //3
   //3        2 
   //3                1
   //résultat: 3

   //Max  |  Nb2  |  Nb3
   //-5
   //9        9
   //9                5
   //résultat: 9



}


