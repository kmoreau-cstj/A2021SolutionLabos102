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
