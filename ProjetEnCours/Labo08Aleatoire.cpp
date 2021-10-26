// But : Utiliser l'al�atoire dans un programme
// Auteur : Karine Moreau
// Date : 2021-10-26

#include "Labo08Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
    srand(time(NULL));           // On choisit la graine de l'al�atoire en utilisant le nombre de secondes �coul�es depuis le d�but de la journ�e, � partir de minuit
    // La graine de l'al�atoire (seed) doit �tre choisie TOUJOURS une SEULE fois au d�but du programme qui utilise l'al�atoire 

  // d�claration des variables
   
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

   // On demande � l'utilisateur de d�cider du min et du max
   cout << "Veuillez entrer un min : ";
   cin >> min;

   cout << "Veuillez entrer un max : ";
   cin >> max;
   */




   alea = rand();

   cout << "premier nombre al�atoire : " << alea << endl;

   for (int i = 0; i < 10000000; i++)
   {
      alea = genererAlea(min, max);
      //cout << "Valeur al�atoire #" << i + 1 << " : " << alea << endl;
      // On augmente le nombre de fr�quence selon la valeur de alea
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

   cout << "Fr�quence de 1 : " << nb1 << endl;
   cout << "Fr�quence de 2 : " << nb2 << endl;
   cout << "Fr�quence de 3 : " << nb3 << endl;
   cout << "Fr�quence de 4 : " << nb4 << endl;
   cout << "Fr�quence de 5 : " << nb5 << endl;
   cout << "Fr�quence de 6 : " << nb6 << endl;


   cout << "Le maximum pour les valeurs al�atoires : " << RAND_MAX << endl;

   system("pause");
   return 0;
}