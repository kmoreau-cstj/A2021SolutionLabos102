// But : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans random.
//L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
//100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
//nombre.
// Auteur : Karine Moreau
// Date : 2021-09-16

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
   // Déclaration des constantes
   const int NB_CHANCES = 5;
   const int MIN = 20;
   const int MAX = 30;
   
   // déclaration des variables
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   int nb;     // C'est la responsabilité de l'utilisateur de lui donner une veleur de départ
   int nbEssais = NB_CHANCES;          // Une variable pour le calcul dans le programme, 
                                       // c'est la responsabilité du programme de lui mettre une valeur de départ
                                       // Au départ, au début du programme l'utilisateur a bien NB_CHANCES

   setlocale(LC_ALL, "");
   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % (MAX -MIN + 1) + MIN; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random

   // Pour tester le programme, on affiche le nombre à deviner
   cout << "le nombre à deviner est : " << random << endl;

   // Demander à l'utilisateur un nombre
   cout << "Vous devez deviner un nombre compris entre " << MIN << " et " << MAX << "." << endl;
   cout << "Vous avez " << NB_CHANCES << " chances." << endl;
   cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
   cin >> nb;

   // Tant que le nb n'est pas compris entre MIN et MAX, on affiche un message d'erreur
   while (!(nb>=MIN && nb<=MAX))
   {
      cout << "Erreur : Le nombre n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;
   }
   // On vient de lire un bon nombre, le nb d'essais doit diminuer de 1
   nbEssais--;

   // Tant que le nb n'est égal à random et qu'il reste des chances, on doit redemander le nb 
   while (nb != random && nbEssais >=1)
   {
      cout << " Non ce n'est pas le bon nombre." << endl;
      cout << "Il vous reste " << nbEssais << " chance(s)." << endl;

      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;

      // Tant que le nb n'est pas compris entre MIN et MAX, on affiche un message d'erreur
      while (!(nb >= MIN && nb <= MAX))
      {
         cout << "Erreur : Le nombre n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
         cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
         cin >> nb;
      }
      // On vient de lire un bon nombre, le nb d'essais doit diminuer de 1
      nbEssais--;
   }

   // Quand on sort de la boucle soit on a gagné soit on a épuisé toutes les chances
   if (nb == random)
   {
      cout << "Bravo vous avez gagné en " << NB_CHANCES - nbEssais << " essai(s)." << endl;
   }
   else
   {
      cout << "Dommage, le bon nombre était " << random << "." << endl;
   }

   system("pause");
   return 0;
}



// plan de test
//  







