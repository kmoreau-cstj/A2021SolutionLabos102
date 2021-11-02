// But : Utiliser des vecteurs pour stocker plusieurs informations du même type : Exemples des notes des étudiants
// Auteur : Karine Moreau
// Date : 2021-11-02


/*
Soit vecteur de type entier dont voici la déclaration et la liste de son contenu :
vector<int> vec{12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0};
1.	Afficher la taille du vecteur.
2.	Afficher le contenu de la première case.
3.	Afficher le contenu de la dernière case.
4.	Afficher le nombre de cases qui contiennent une valeur nulle.
5.	Afficher le numéro de la case et son contenu sous la forme vec[#]= Valeur.
6.	Afficher les cases du vecteur dont le contenu est pair.
7.	Afficher le vecteur en commençant par la fin.
8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxième temps les cases d'indice impair.

*/
#include "labo09Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");


   // Déclaration des constantes
 
   // Déclaration des variables
   vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };

   // Afficher la taille du vecteur
   cout << "Taille du vecteur " << vec.size() << endl;
/*
   // Afficher le contenu de la première case de trois façons différentes
   cout << "Le contenu de la première case du vecteur : " << vec[0] << endl;
   cout << "Le contenu de la première case du vecteur : " << vec.at(0) << endl;
   cout << "Le contenu de la première case du vecteur : " << vec.front() << endl;


   // Afficher le contenu de la dernière case de trois façons différentes
   cout << "Le contenu de la dernière case du vecteur : " << vec[vec.size()-1] << endl;
   cout << "Le contenu de la dernière case du vecteur : " << vec.at(vec.size() - 1) << endl;
   cout << "Le contenu de la dernière case du vecteur : " << vec.back() << endl;

   // Afficher le nombre de cases qui contiennent une valeur nulle

   cout << "Le nombre de case à zéro est de " << calculerFrequence(vec, 0) << endl;

   // Afficher le numéro de la case et son contenu sous la forme vec[#] = Valeur
   afficherVecteur(vec, true);
   afficherVecteur(vec, false);
   */
   // Afficher les cases du vecteur dont le contenu est pair
   afficherContenuPairouImpair(vec, false, false);

   // Afficher le vecteur en commençant par la fin.
   afficherVecteurParLaFin(vec, true);

   system("pause");
   return 0;
}