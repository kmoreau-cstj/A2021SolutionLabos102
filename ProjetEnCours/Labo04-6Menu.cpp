// But : Le programme affiche un menu
// a. Addition
// b. Soustraction
// c. Multiplication
// d. Division
// e. Quitter
// 
// Il demande le choix à l'utilisateur. Le programme vérifie que l'utilisateur a bien rentré une lettre entre a et e.
// Tant que l'utilisateur ne demande pas à quitter, le programme affiche en toute lettre le choix de l'utilisateur
//
// 
// 
// Auteur : Karine Moreau
// Date : 2021-09-20




#include <iostream>


using namespace std;


void main()
{
   // Déclaration des variables
   char choix;

   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // Le programme affiche le menu toujours en haut de l'écran en l'effaçant
   system("cls");
   cout << "a. Addition" << endl;
   cout << "b. Soustraction" << endl;
   cout << "c. Multiplication" << endl;
   cout << "d. Division" << endl;
   cout << "e. Quitter" << endl;
   cout << "Votre choix -->";
   // Le programme lit le choix de l'utilisateur
   cin >> choix;


   // TODO : Le programme vérifie que l'utilisateur a bien rentré une lettre entre a et e.
   // Tant que l'utilisateur n'a pas entré une lettre comprise entre a et e, on l'insulte
   while ((choix < 'a' || choix >'e') && (choix <'A' || choix > 'E'))
   {
      cout << "Erreur : Le choix n'est pas compris entre a et e\n";
      system("pause");

      system("cls");
      cout << "a. Addition" << endl;
      cout << "b. Soustraction" << endl;
      cout << "c. Multiplication" << endl;
      cout << "d. Division" << endl;
      cout << "e. Quitter" << endl;
      cout << "Votre choix -->";
      // Le programme lit le choix de l'utilisateur
      cin >> choix;

   }

   // Ici, le choix est bien compris entre a et e



   // TODO :  Tant que l'utilisateur ne demande pas à quitter, 
   //         le programme affiche en toute lettre le choix de l'utilisateur (switch)
   while (choix != 'e' && choix !='E')
   {
      switch (choix)
      {
         case 'a':
         case 'A':
            cout << "vous avez choisi l'addition\n";
            break;
         case 'b':
         case 'B':
            cout << "vous avez choisi la soustraction\n";
            break;
         case 'c':
         case 'C':
            cout << "vous avez choisi la multiplication\n";
            break;
         case 'd':
         case 'D':
            cout << "vous avez choisi la division\n";
            break;
      }
      
      system("pause");
      // Le programme affiche le menu toujours en haut de l'écran en l'effaçant
      system("cls");
      cout << "a. Addition" << endl;
      cout << "b. Soustraction" << endl;
      cout << "c. Multiplication" << endl;
      cout << "d. Division" << endl;
      cout << "e. Quitter" << endl;
      cout << "Votre choix -->";
      // Le programme lit le choix de l'utilisateur
      cin >> choix;


      // TODO : Le programme vérifie que l'utilisateur a bien rentré une lettre entre a et e.
      // Tant que l'utilisateur n'a pas entré une lettre comprise entre a et e, on l'insulte
      while ((choix < 'a' || choix >'e') && (choix < 'A' || choix > 'E'))
      {
         cout << "Erreur : Le choix n'est pas compris entre a et e\n";
         system("pause");

         system("cls");
         cout << "a. Addition" << endl;
         cout << "b. Soustraction" << endl;
         cout << "c. Multiplication" << endl;
         cout << "d. Division" << endl;
         cout << "e. Quitter" << endl;
         cout << "Votre choix -->";
         // Le programme lit le choix de l'utilisateur
         cin >> choix;

      }

   }



   system("pause");

}
// plan de test
//  







