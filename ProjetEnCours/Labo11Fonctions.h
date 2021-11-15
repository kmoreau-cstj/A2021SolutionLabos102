#pragma once


// Liste des bibliothèques qui seront utilisées dans tout le projet

#include <iostream>
#include <fstream>            // Bibliothèque pour utiliser les fonctions sur les fichiers
#include <string>
#include <iomanip>

using namespace std;



// Liste des constantes qui seront visibles partout dans les fonctions du projet
 // Déclaration des constantes
const string NOM_FICHIER = "Donnees.txt";
const string RESULTAT = "Resultats.txt";
const string TITRE = "Résultats du cours d'objets connectés";
const string NOM_COL1 = "Nom/Prénom de l'étudiant";
const string NOM_COL2 = "Eval 1";
const string NOM_COL3 = "Eval 2";
const string NOM_COL4 = "Eval 3";
const string NOM_COL5 = "Total";
const string NOM_COL6 = "Résultats";
const string OK = "Réussite";
const string KO = "Échec";
const string STAT = "Statistiques";
const string MOYENNE = "Moyenne";


const char MOTIF1 = '-';
const char MOTIF2 = ' ';

const int PLUS = 3;
const int COL1 = 25;
const int COL2 = NOM_COL2.size() + PLUS;
const int COL3 = NOM_COL3.size() + PLUS;
const int COL4 = NOM_COL4.size() + PLUS;
const int COL5 = NOM_COL5.size() + PLUS;
const int COL6 = NOM_COL6.size() + PLUS;
const int LARGEUR = COL1 + COL2 + COL3 + COL4 + COL5 + COL6;

const int NOTE_PASSAGE = 60;

// La liste des structures : qui servent d'enveloppe pour regrouper plusieurs informations de type différent
struct info
{
   // On se crée autant de variables qu'il a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examenFinal;


};

struct stats
{
   double total;
   double moyenne1 = 0;
   double moyenne2 = 0;
   double moyenne3 = 0;
   double moyenneTotal = 0;
   int nbEtudiant = 0;

};





// Liste des prototypes des fonctions
ifstream ouvrirFichierEnLecture(string nomFichier);

ofstream ouvrirFichierEnEcriture(string nomFichier);

void ecrireEnTete(ofstream& canal, int nbDecimales);
void lireEnregistrement(ifstream& canal, info& EtudiantEnCours);
info lireEnregistrement(ifstream& canal);

void calculerResultats(info EtudiantEnCours, stats& resultats);

