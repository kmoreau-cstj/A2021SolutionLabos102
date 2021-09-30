// But : Utiliser des fonctions de la bibliothèque de mathématiques
// demander à l'utilisateur un nombre pour la base et un autre nombre pour la puissance
// le programme appelle une fonction pour calculer la base à la puissance de 
// Auteur : Karine Moreau
// Date : 2021-09-27

#include <iostream>
#include <math.h>


using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // Déclaration des variables
   double base;
   double puissance;
   double resultat;
   char caractere;

   cout << "Veuillez entrer la base : ";
   cin >> base;
   cout << "Veuillez entrer la puissance : ";
   cin >> puissance;


   // Appel d'une fonction qui retourne une valeur de int , float ou double ou char
   resultat = pow(base, puissance);

   cout << base << " à la puissance " << puissance << " est de " << resultat << endl;

   // On veut calculer la puissance de la base mais la base est automatiquement arrondie à l'inférieur 
   // et la puissance arrondie au supérieur


   // Appel d'une fonction sa valeur de retour sera affichée à l 'écran             // Appel d'une fonction comme paramètre à une autre fonction
   cout << floor(base) << " à la puissance " << ceil(puissance) << " est de " << pow(floor(base), ceil(puissance)) << endl;
   
   cout << "Veuillez entrer un caractere : ";
   cin >> caractere;

   // On veut savoir si le caractère est un chiffre ou si c'est une lettre ou ni l'un ni l'autre en utilisant une fonction
   // Les fonctions de type bool sont appelées dans les conditions des if et while : elles retournent des valeurs vrai ou faux
   if (isdigit(caractere))
   {
      cout << caractere << " est un chiffre " <<endl;
   }
   else if (isalpha(caractere))
   {
      cout << caractere << " est une lettre " << endl;

   }
   else
   {
      cout << caractere << " est ni un chiffre ni une lettre " << endl;
   }



   system("pause");

}
// plan de test
//  







