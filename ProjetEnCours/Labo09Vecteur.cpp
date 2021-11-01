// But : Utiliser des vecteurs pour stocker plusieurs informations du m�me type : Exemples des notes des �tudiants
// Auteur : Karine Moreau
// Date : 2021-11-01

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");


   // D�claration des constantes
   const int NB_ETUDIANT = 5;

   // D�claration des variables
   int nbValeurs;
   double note;

   vector<double> vecNote;       // Ici on a d�clar� un contenant pouvant recevoir des doubles. Mais pour l'instant le contenant est vide.

   // Demander � l'utilisateur le nombre d'information voulues
   cout << "Veuillez entrer le nombre de valeurs d�sir�es : ";
   cin >> nbValeurs;


   vector<int> vecEntier(nbValeurs);       // avec les (), on appelle le constructeur de la classe vector et on lui passe en param�tre le nombre d'�l�ments que l'on veut dans le vecteur
                                           // Chaque �l�ment est automatiquement initialis� � 0 qui est la valeur par d�faut.

   vector<float> vecReel(8, 59.99);             // le constructeur a deux param�tres : le premier le nombre d'�l�ments, le second :  la valeur � mettre dans chaque �l�ment

   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u' ,'y' };       // On vient de cr�er un vecteur de 6 �l�ments chacun initialis� avec des valerus diff�rentes

   vector<string> vecPage{ "Bonjour", " � ", "tous !\n\n\n" };



   // Apprendre � afficher le contenu d'un vecteur
   for (int numElement = 0; numElement < vecNote.size(); numElement++)
   {
      cout << "Contenu de l'�l�ment #" << numElement + 1 << " est " << vecNote.at(numElement) << endl;
   }

   for (int indice = 0; indice < vecEntier.size(); indice++)
   {
      cout << "Contenu de l'�l�ment #" << indice + 1 << " est " << vecEntier[indice] << endl;
   }

   for (int i = 0; i < vecReel.size(); i++)
   {
      cout << "Contenu de l'�l�ment #" << i + 1 << " est " << vecReel[i] << endl;

   }

   for (int i = 0; i < vecVoyelle.size(); i++)
   {
      cout << "Contenu de l'�l�ment #" << i + 1 << " est " << vecVoyelle[i] << endl;
   }

   for (int x = 0; x < vecPage.size(); x++)
   {
      cout << vecPage.at(x);
   }

   // Apprendre � modifier le contenu d'un vecteur contenant des �l�ments
   for (int position = 0; position < vecEntier.size(); position++)
   {
      cout << "Veuillez entrer la valeur #" << position + 1 << " : ";
      cin >> vecEntier.at(position);
   }

   for (int indice = 0; indice < vecEntier.size(); indice++)
   {
      cout << "Contenu de l'�l�ment #" << indice + 1 << " est " << vecEntier[indice] << endl;
   }

   // Quand le vecteur est vide, il faut cr�er les cases avec push_back
   for (int position = 0; position < NB_ETUDIANT; position++)
   {
      cout << "Veuillez entrer la note de l'�tudiant#" << position + 1 << " : ";
      cin >> note;
      // On ajoute une case dans le vecteur. La case s'ajoute � la fin et on l'initialise avec la valeur pass�e en param�tre
      vecNote.push_back(note);
   }

   for (int indice = 0; indice < vecNote.size(); indice++)
   {
      cout << "l'�tudiant #" << indice + 1 << " a obtenu la note de " << vecNote[indice] << endl;
   }

   // On veut calculer la moyenne du groupe





   system("pause");
   return 0;
}