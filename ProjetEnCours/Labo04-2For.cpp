// But : Le programme demande un nombre de départ et un nombre de fin et 
// le programme affiche les nombres compris entre le nombre de départ et le nombre de fin
// nombre de départ : 5
// nombre de fin : 10
// 5
// 6
// 7
// 8
// 9
// 10
// 
// nombre de départ : 10
// nombre de fin : 5
// 10
// 9
// 8
// 7
// 6
// 5
// 
// Auteur : Karine Moreau
// Date : 2021-09-14

#include <iostream>

using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // Déclaration des constantes et initialisation (donner une valeur)
 
   // Déclaration des variables
   
   int depart;
   int fin;

   // il y a des variables pour mémoriser les informations fournies par l'utilisateur.
   // C'est la responsabilité de l'utilisateur de donner la première valeur à la note
   cout << "Veuillez entrer le nombre de départ" << endl;
   cin >> depart;

   // il y a des variables pour calculer les résultats.
   // C'est la responsabilité du programmeur d'y mettre la valeur de départ
   cout << "Entrer le nombre de fin";
   cin >> fin ;
 
   
   //if (fin > depart)
   {

   


   for (int compteur = depart; compteur <= fin; compteur++)
   {
      cout << compteur << endl;

   }

}
   //else
   {

      for (int compteur = depart; compteur >= fin; compteur--)
      {
         cout << compteur << endl;

      }


   }

   system("pause");

}
// plan de test
//  







