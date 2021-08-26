//But : Écrire un programme qui affiche un message à l'écran dans la console
//Auteur : Karine Moreau
//Date : 2021-08-26

// Tout programme doit commencer par la fonction principale qui s'appelle main
// La plupart des fonctions en informatique sont suivies de parenthèses pour dresser la liste des paramètres 
// Si la liste de paramètres est vide, les parenthèses sont obligatoires et le contenu reste vide ()
// Une fonction peut ou pas retourner un résultat.
// On doit indiquer le type de résultat attendu avant le nom de la fonction. Ici on ne retourne rien donc void

// On doit s'équiper d'outils pour éviter d'avoir à les recréer à chaque fois. Les outils sont stockés dans une
// bibliothèque. On a besoin d'une bibliothèque spécialisée dans les flux (stream) d'entrées et les sorties 
//(in : i : input)(o : out :output) => iostream
#include <iostream>

void main()

// Les instructions doivent être placées dans un bloc d'instructions qui en C++ s'ouvre avec une accolade { et se
// ferme avec }
// L'accolade ouvrant doit être alignée verticalement avec l'accolade fermante
// Les instructions doivent être décalées d'une tabulation pour montrer qu'elles sont à l'intérieur du bloc. 
// On indente le code pour améliorer sa lisibilité
{
	// Afficher un message à l'écran
	// channel output  : ou cout pour solliciter le périphérique de sortie (o : out : output) qui est l'écran
	// L'instructiuon cout se trouve dans l'espace de nom qui s'appelle std. 
	// On doit le faire suivre de deux fois des deux points
	std::cout << "Bienvenue à tous !";
		// << est un opérateur de redirection. Dirige le message vers l'écran
		// Tout texte en C++ doit être encadré de guillemets. Il apparait en rouge
		// Chaque instruction doit se terminer par une point virgule ;

		
}