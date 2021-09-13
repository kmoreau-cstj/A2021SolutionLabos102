// But : Le programme demande à l'utilisateur 5 notes. 
// Il calcule la moyenne du groupe et affiche le résultat à l'écran
// Auteur : Karine Moreau
// Date : 2021-09-13

#include <iostream>

using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // Déclaration des constantes et initialisation (donner une valeur)
   const int NB_NOTES = 5;

   // Déclaration des variables
   // il y a des variables pour mémoriser les informations fournies par l'utilisateur.
   // C'est la responsabilité de l'utilisateur de donner la première valeur à la note
   double note;
   // il y a des variables pour calculer les résultats.
   // C'est la responsabilité du programmeur d'y mettre la valeur de départ
   double moyenne = 0;     // Au départ, aucune note n'est entrée, la moyenne du groupe vaut 0;


   for (int compteur = 1; compteur <= NB_NOTES; compteur++)
   
   {
      // Le programme demande une note à l'utilisateur
      cout << "Veuillez entrer une note : " ;
      cin >> note;

      // On ajoute la note à la moyenne
      moyenne = moyenne + note;
   
   }

   // Ici on a maintenant additionner les 5 notes dans la variable moyenne
   // il faut la diviser par le nombre total de note
   moyenne = moyenne / NB_NOTES;

   cout << "La moyenne du groupe est de : " << moyenne << endl;

   
   system("pause");

}
// plan de test
//  







