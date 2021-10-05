#include "LabosFonctions05.h"
double CalculerMax(double valeur1, double valeur2, double valeur3)
{
  //Déclarer variables pour le résultat et non les données fournies par l'utilisateur
	double resultat= valeur1;

	if (valeur2 > resultat)
	{
		resultat = valeur2;
	}

	if (valeur3 > resultat)
	{
		resultat = valeur3;
	}

	return resultat;

}

double factorielle(unsigned int entier)
{
	// Déclaration des varaibles
	double resultat = 1;

	for (unsigned int i = 1; i <= entier; i++)
	{
		resultat = resultat * i;
	}

   return resultat;
}

int RetournerCategorie_Age(int valeur)
{
	if (valeur>=0 && valeur<=12 )
	{
		return 1;
	}
	else if (valeur >= 13 && valeur <= 17)
	{
		return 2;
	}
	else if (valeur >= 18 && valeur <= 64)
	{
		return 3;
	}
	else
	{
		return 4;
	}
	
}

bool ValiderAgeCategorie(int age, int categorie)
{
	if (categorie == 1 && (age>=0&&age<=12))
	{
		return true;
	}
	else if(categorie==2 && (age>=13 && age<=17))
	{
		return true;
	}
	else if(categorie==3 && (age>=18 && age<=64))
	{
		return true;
	}
	else if (categorie == 4 && (age >= 65))
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool ValiderAgeCategorie2(int age, int categorie)
{

	if (categorie == RetournerCategorie_Age(age))
	{
		return true;
	}
	else
	{
		return false;
	}

	
}

bool ValiderAgeCategorie3(int age, int categorie)
{
	return categorie == RetournerCategorie_Age(age);
}

int VerifierAge(int min, int max)
{
	int age;

	cout << "Veuillez entrer un age : ";
	cin >> age;

	
	while (age < min || age > max)
	{
		cerr << "Erreur" << endl;

		cout << "Veuillez entrer un age : ";
		cin >> age;


	}
	return age;
}

int VerifierValeur(int min, int max, string natureDeLaValeur)
{
	int valeur;

	cout << "indiquez votre " << natureDeLaValeur << " :";
	cin >> valeur;


	while (valeur < min || valeur > max)
	{
		cerr << "Erreur" << endl;

		cout << "indiquez votre " << natureDeLaValeur << " :";
		cin >> valeur;


	}
	return valeur;
}

bool savoirSiPair(int nb)
{
	/*if (nb % 2 == 0)
	{
		return true;
	}
	else
		return false;*/
	return !nb % 2;
	//return nb % 2 == 0;

}
