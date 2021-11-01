// But : Utiliser des vecteurs pour stocker plusieurs informations du même type : Exemples des notes des étudiants
// Auteur : Karine Moreau
// Date : 2021-11-01

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");


   // Déclaration des constantes
   const int NB_ETUDIANT = 5;

   // Déclaration des variables
   int nbValeurs;
   double note;

   vector<double> vecNote;       // Ici on a déclaré un contenant pouvant recevoir des doubles. Mais pour l'instant le contenant est vide.

   // Demander à l'utilisateur le nombre d'information voulues
   cout << "Veuillez entrer le nombre de valeurs désirées : ";
   cin >> nbValeurs;


   vector<int> vecEntier(nbValeurs);       // avec les (), on appelle le constructeur de la classe vector et on lui passe en paramètre le nombre d'éléments que l'on veut dans le vecteur
                                           // Chaque élément est automatiquement initialisé à 0 qui est la valeur par défaut.

   vector<float> vecReel(8, 59.99);             // le constructeur a deux paramètres : le premier le nombre d'éléments, le second :  la valeur à mettre dans chaque élément

   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u' ,'y' };       // On vient de créer un vecteur de 6 éléments chacun initialisé avec des valerus différentes

   vector<string> vecPage{ "Bonjour", " à ", "tous !\n\n\n" };



   // Apprendre à afficher le contenu d'un vecteur
   for (int numElement = 0; numElement < vecNote.size(); numElement++)
   {
      cout << "Contenu de l'élément #" << numElement + 1 << " est " << vecNote.at(numElement) << endl;
   }

   for (int indice = 0; indice < vecEntier.size(); indice++)
   {
      cout << "Contenu de l'élément #" << indice + 1 << " est " << vecEntier[indice] << endl;
   }

   for (int i = 0; i < vecReel.size(); i++)
   {
      cout << "Contenu de l'élément #" << i + 1 << " est " << vecReel[i] << endl;

   }

   for (int i = 0; i < vecVoyelle.size(); i++)
   {
      cout << "Contenu de l'élément #" << i + 1 << " est " << vecVoyelle[i] << endl;
   }

   for (int x = 0; x < vecPage.size(); x++)
   {
      cout << vecPage.at(x);
   }

   // Apprendre à modifier le contenu d'un vecteur contenant des éléments
   for (int position = 0; position < vecEntier.size(); position++)
   {
      cout << "Veuillez entrer la valeur #" << position + 1 << " : ";
      cin >> vecEntier.at(position);
   }

   for (int indice = 0; indice < vecEntier.size(); indice++)
   {
      cout << "Contenu de l'élément #" << indice + 1 << " est " << vecEntier[indice] << endl;
   }

   // Quand le vecteur est vide, il faut créer les cases avec push_back
   for (int position = 0; position < NB_ETUDIANT; position++)
   {
      cout << "Veuillez entrer la note de l'étudiant#" << position + 1 << " : ";
      cin >> note;
      // On ajoute une case dans le vecteur. La case s'ajoute à la fin et on l'initialise avec la valeur passée en paramètre
      vecNote.push_back(note);
   }

   for (int indice = 0; indice < vecNote.size(); indice++)
   {
      cout << "l'étudiant #" << indice + 1 << " a obtenu la note de " << vecNote[indice] << endl;
   }

   // On veut calculer la moyenne du groupe





   system("pause");
   return 0;
}