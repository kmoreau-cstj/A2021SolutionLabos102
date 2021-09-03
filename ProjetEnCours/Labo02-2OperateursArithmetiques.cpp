// But : Le programme demande deux nombres ENTIERS pour chaque opérateur arithmétique 
// (+ - * / % modulo), calcule le résultat et l'affiche à l'écran
// Auteur : Karine Moreau
// Date : 2021-08-31

#include <iostream>

void main()
{
	// KM : Déclaration des variables
	int nb1;
	int nb2;
	int operation;
	int resteDivisionEntiere;

	// FR : Demander à l'utilisateur de taper deux nombre
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Calculer la somme des deux nombres
	operation = nb1 + nb2;

	// Afficher le résultat et passer à la ligne : \ est un caractère d'échappement, 
	// le caractère suivant ne sera affiché à l'écran, mais sera interprété : n =>new line t => tabulation a => alarme
	std::cout << nb1 << " + " << nb2 << " = " << operation << "\n";

	// Demander à l'utilisateur de taper deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Calculer la soustraction des deux nombres
	operation = nb1 - nb2;

	// Afficher le résultat
	std::cout << nb1 << "\t-\t" << nb2 << "\t=\t" << operation << "\n";

	// Demander à l'utilisateur de taper deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Calculer la multiplication des deux nombres
	operation = nb1 * nb2;

	// Afficher le résultat
	std::cout << nb1 << "\t*\t" << nb2 << "\t=\t" << operation << "\n";

	// Demander à l'utilisateur de taper deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// TODO : Calculer la division des deux nombres
	// Si nb2 est différent de zéro on peut faire la division, sinon on affiche un message d'erreur
	if (nb2 !=0)
	{
		operation = nb1 / nb2;
		// Calculer le reste de la division
		resteDivisionEntiere = nb1 % nb2;

		// Afficher le résultat en utilisant le endl pour end line
		std::cout << nb1 << "\t/\t" << nb2 << "\t=\t" << operation << " reste " << resteDivisionEntiere << std::endl ;

	}
	else
	{
		std::cout << "erreur : division par zéro" << std::endl;
	}



}




