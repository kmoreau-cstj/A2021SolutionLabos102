#include "labo09Fonctions.h"

int calculerFrequence(vector<int> vecInt, int valeurCherchee)
{
   int nbValeur=0;
   for (int i = 0; i < vecInt.size(); i++)
   {
      if (vecInt.at(i) == 0)
      {
         nbValeur++;
      }
   }
   return nbValeur;
}

void afficherVecteur(vector<int> vecAAfficher, bool commenceAZero)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      cout << "vec[" << (commenceAZero? i : i+1)  << "]=" << vecAAfficher[i] << endl;
   }
}

void afficherVecteur(vector<float> vecAAfficher, bool commenceAZero)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
   }
}


void afficherVecteur(vector<double> vecAAfficher, bool commenceAZero)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
   }
}

void afficherVecteur(vector<char> vecAAfficher, bool commenceAZero)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
   }
}


void afficherVecteur(vector<string> vecAAfficher, bool commenceAZero)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
   }
}

void afficherContenuPairouImpair(vector<int> vecAAfficher, bool commenceAZero, bool lesPairs)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      if (lesPairs && vecAAfficher[i]%2 ==0)
      {
         cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
      }
      else if(!lesPairs && vecAAfficher[i] % 2 != 0)
      {
         cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
      }
   }
}

void afficherVecteurParLaFin(vector<int> vecAAfficher, bool commenceAZero)
{
   for (int i = 0; i < vecAAfficher.size(); i++)
   {
      cout << "vec[" << (commenceAZero ? i : i + 1) << "]=" << vecAAfficher[i] << endl;
   }
}

void supprimerValeur(vector<int>& vecASupprimer, int valeurASupprimer)
{
   for (int i = 0; i < vecASupprimer.size(); i++)
   {
      if (vecASupprimer.at(i) == valeurASupprimer)
      {
         vecASupprimer.erase(vecASupprimer.begin()+i);
         // On doit rester sur la même case 
         i--;
      }
   }
   cout << "Afficher contenu de vec dans la fonction :" << endl;
   afficherVecteur(vecASupprimer, true);
}


vector<int> supprimerValeur2(vector<int> vecASupprimer, int valeurASupprimer)
{
   for (int i = vecASupprimer.size() -1 ; i >= 0; i--)
   {
      if (vecASupprimer.at(i) == valeurASupprimer)
      {
         vecASupprimer.erase(vecASupprimer.begin() + i);
         
      }
   }
   cout << "Afficher contenu de vec dans la fonction :" << endl;
   afficherVecteur(vecASupprimer, true);
   return vecASupprimer;
}

void echangerValeur(int& verreBleu, int& verreRouge)
{
   int verreVert = verreRouge;
   verreRouge = verreBleu;
   verreBleu = verreVert;

   cout << "Dans la fonction Après l'échange" << endl;
   cout << "Contenu du verre bleu : " << verreBleu << endl;
   cout << "Contenu du verre rouge : " << verreRouge << endl;


}
