// But : comprendre et utiliser une chaine de caractères : string
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>
#include "Labo06Fonctions.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // déclaration des variables
   int entier = 0;
   string prenom;          // Ici on a appelé le constructeur de string, qui par défaut initialise la variable avec une chaine vide ""
   string adresse;
   string paragraphe;
   string poubelle;

   cout << "Contenu de entier : " << entier << endl;
   cout << "Contenu de prénom : " << prenom << endl;

   cout << "Data de la variable prenom :  " << prenom.data() << endl;
   cout << "Taille de la variable prenom :  " << prenom.size() << endl;
   cout << "Longueur de la variable prenom :  " << prenom.length() << endl;
   cout << "Capacité de la variable prenom :  " << prenom.capacity() << endl;
   cout << "Taille maximale de la variable prenom :  " << prenom.max_size() << endl;

   prenom.assign("Arthur");
   cout << prenom;
   


   string chaine1("Bonjour");
   string chaine2("à tous !");
  
   cout << "Data de la variable chaine1 :  " << chaine1.data() << endl;                // Obtenir le contenu de la variable
   cout << "Taille de la variable chaine1 :  " << chaine1.size() << endl;              // le nombre de caractères utilisés
   cout << "Longueur de la variable chaine1 :  " << chaine1.length() << endl;          // Le nombre de caractères utilisés donc même chose que le size
   cout << "Capacité de la variable chaine1 :  " << chaine1.capacity() << endl;        // l'espace occupé en mémoire

   cout << "Data de la variable chaine2 :  " << chaine2.data() << endl;
   cout << "Taille de la variable chaine2 :  " << chaine2.size() << endl;
   cout << "Longueur de la variable chaine2 :  " << chaine2.length() << endl;
   cout << "Capacité de la variable chaine2 :  " << chaine2.capacity() << endl;

   system("cls");
   

   // int nb1, nb2, nb3;
    //cin >> nb1 >> nb2 >> nb3;
    //cin >> adresse;                                 // enter, espace, tabulation et cela sépare les contenus des variables

   /*
   cout << "Veuillez entrer votre prénom : ";
   cin >> prenom; 
   
   
   // Karine + enter
   // Après chaque cin, il faut s'assurer que la mémoire du clavier soit complètement vide. Il faut supprimer les séparateurs laissés par le cin (espace, tabulation ou un enter)
   //cin.ignore(1, '\n');
   cin.ignore();
   //cin.ignore(4);
   //cin.ignore('\n');           // GROSSE ERREUR


   cout << "Vous vous appelez " << prenom << endl;    // Karine

   cout << "Veuillez entrer votre adresse : ";

  // int nb1, nb2, nb3;
   //cin >> nb1 >> nb2 >> nb3;
   //cin >> adresse;                                 // enter, espace, tabulation et cela sépare les contenus des variables
   // Pour permettre la saisie d'espace dans une chaine de caractères, il faut utiliser la fonction getline
   getline(cin, adresse, '\n');           // Dans la mémoire du clavier, il reste en enter du prénom. Le getline le trouve et achève son travail.
                                          // Solution : il faudrait vider la mémoire du clavier avant d'utiliser le getline ou après chaque cin

   cout << "Vous habitez au " << adresse << endl;

   cout << "Veuillez vous présenter :";
   getline(cin, paragraphe, '\\');

   cout << "Votre lettre de présentation : "<<  paragraphe << endl;

   //cin.ignore(8192, '\n');
   getline(cin, poubelle, '\n');

   getline(cin, prenom, '\n');
   cout << "Votre prénom : " << prenom << endl;


   if (prenom == "Karine")
   {
      cout << "C'est mon amie" << endl;

   }
   else
   {
      cout << "Ce n'est pas mon amie" << endl;

   }

   if (prenom >= "Arthur")
   {
      cout << prenom << " vient après Arthur" << endl;
   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }

   // On veut concaténer une chaine avec une autre : c'est à dire ajouter un bout de la première la deuxième chaine
   chaine1 += " \n"  + chaine2 + "\n";

   cout << chaine1 ;
   

   // On veut enlever des caractères au prénom Karine = Ka
   prenom.erase(2, 4);

   cout << prenom << endl;

   // On veut effacer tout le contenu de la variable
   prenom = "";
   //prenom.clear();
   //prenom.erase();

   cout << prenom << " : " << prenom.size() <<  endl;

   */


   string clavier;
   int nombre;

   cout << "Veuillez entrer un nombre entier ";
   // On utilise getline pour être sûr que tout ce que l'utilisateur tape au clavier soit bien retiré de la mémoire du clavier
   getline(cin, clavier, '\n');

   while (!etreUnNombre(clavier))
   {
      cout << "Erreur : On vous demande un nombre entier." << endl;
      cout << "Veuillez entrer un nombre entier ";
      // On utilise getline pour être sûr que tout ce que l'utilisateur tape au clavier soit bien retiré de la mémoire du clavier
      getline(cin, clavier, '\n');

   }

   // On va convertir le contenu de clavier en entier
   nombre = stoi(clavier);

   cout << "Nombre  : " << nombre << endl;






   system("pause");
   return 0;
}