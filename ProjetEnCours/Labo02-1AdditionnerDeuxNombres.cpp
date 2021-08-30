// But : Ecrire un programme qui demande deux nombres entiers à l'utilisateur, qui calcule la 
// somme des deux nombres et affiche le résultat à l'écran 
// Auteur : Karine Moreau
// Date : 2021-08-30

#include <iostream>	// Coffre à outils pour communiquer avec l'utilisateur (cout pour afficher à l'écran)

void main()			// Fonction principale sans paramètre entre () et retourne rien (void)
{					// Ouverture du bloc d'instructions
	// On a besoin de 2 espaces dans la mémoire vive pour enregistrer les deux nombres
	// Il faut déclarer deux variables : il faut 2 informations
	// 1. quel genre d'information on veut stocker : 
	//			Texte (string 15 octets), un seul caractère (char = 1octet), un nombre entier(int 4 octets), 
	//			un nombre décimal(float 4octets, double 10 octets), booléen(bool 1 octet)
	// 2. On doit donner un nom à la variable : ne commence par un chiffre, n'a pas d'espace
	//			commence par une minuscule, pas de caractère accentué, le deuxième mot commence par une majuscule	

	int premierNombre;
	int deuxiemeNombre;
	int resultat;

	// Pour afficher correctement les accents
	setlocale(LC_ALL, "");
	
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> premierNombre;
	// On vérifie la valeur contenue dans la variable
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer un deuxième nombre entier :";
	std::cin >> deuxiemeNombre;
	//std::cout << deuxiemeNombre;

	// On fait la somme des deux nombres et on enregistre dans la variable résultat
	// ATTENTION : l'opération est à droite du = et la destination est à 
	resultat = premierNombre + deuxiemeNombre;

	// On doit afficher à l'écran le contenu de resultat
	std::cout << premierNombre << "+" << deuxiemeNombre << "=" << resultat;

}

