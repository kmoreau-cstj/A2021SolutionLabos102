// But : Utiliser l'aléatoire dans un programme
// Auteur : Karine Moreau
// Date : 2021-10-26

#include "Labo08Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
    srand(time(NULL));           // On choisit la graine de l'aléatoire en utilisant le nombre de secondes écoulées depuis le début de la journée, à partir de minuit
    // La graine de l'aléatoire (seed) doit être choisie TOUJOURS une SEULE fois au début du programme qui utilise l'aléatoire 

  // déclaration des variables
   
   int alea;
   int min = 1;
   int max = 6;

   int nb1 = 0;
   int nb2 = 0;
   int nb3 = 0;
   int nb4 = 0;
   int nb5 = 0;
   int nb6 = 0;


   /*

   // On demande à l'utilisateur de décider du min et du max
   cout << "Veuillez entrer un min : ";
   cin >> min;

   cout << "Veuillez entrer un max : ";
   cin >> max;
   */




   alea = rand();

   cout << "premier nombre aléatoire : " << alea << endl;

   for (int i = 0; i < 10000000; i++)
   {
      alea = genererAlea(min, max);
      //cout << "Valeur aléatoire #" << i + 1 << " : " << alea << endl;
      // On augmente le nombre de fréquence selon la valeur de alea
      switch (alea)
      {
         case 1:
            nb1++;
            break; 
         case 2:
               nb2++;
               break;
         case 3:
            nb3++;
            break;
         case 4:
            nb4++;
            break;
         case 5:
            nb5++;
            break;
         case 6:
            nb6++;
            break;
      }






   }

   cout << "Fréquence de 1 : " << nb1 << endl;
   cout << "Fréquence de 2 : " << nb2 << endl;
   cout << "Fréquence de 3 : " << nb3 << endl;
   cout << "Fréquence de 4 : " << nb4 << endl;
   cout << "Fréquence de 5 : " << nb5 << endl;
   cout << "Fréquence de 6 : " << nb6 << endl;


   cout << "Le maximum pour les valeurs aléatoires : " << RAND_MAX << endl;

   system("pause");
   return 0;
}