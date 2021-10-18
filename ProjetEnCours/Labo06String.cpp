// But : comprendre et utiliser une chaine de caractères : string
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // déclaration des variables
   int entier = 0;
   string prenom;          // Ici on a appelé le constructeur de string, qui par défaut initialise la variable avec une chaine vide ""
   string adresse;
   string paragraphe;

   cout << "Contenu de entier : " << entier << endl;
   cout << "Contenu de prénom : " << prenom << endl;

   cout << "Data de la variable prenom :  " << prenom.data() << endl;
   cout << "Taille de la variable prenom :  " << prenom.size() << endl;
   cout << "Longueur de la variable prenom :  " << prenom.length() << endl;
   cout << "Capacité de la variable prenom :  " << prenom.capacity() << endl;
   cout << "Taille maximale de la variable prenom :  " << prenom.max_size() << endl;

   string chaine1("Bonjour");
   string chaine2("Bonjour à tous ! Et Bienvenue dans le cours de programmation");
  
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


   cout << "Veuillez entrer votre prénom : ";
   cin >> prenom;                               // Karine + enter
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

   system("pause");
   return 0;
}