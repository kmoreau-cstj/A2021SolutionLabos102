#include<iostream>
#include "Devoir04.h"
using namespace std;
double CalculerMoyenne(int NbNotes)

{
   double Moyenne = 0 ;
   double note;



   for (int i = 1; i <= NbNotes; i++)
   {
      cout << "veuillez entrer une note";
      cin >> note;
      Moyenne = Moyenne + note;
   }
   Moyenne = Moyenne / NbNotes; 

   return Moyenne;











}

bool ValiderDate(int jour, int mois, int annee)
{
   if ((jour >= 1 && jour <= 31) &&( mois == 1 || mois == 3 || mois == 5 || mois == 7 ||mois == 8 || mois == 10 || mois == 12))
   {
      return true;
   }
   else
   {
      if ((jour >=1 && jour <=30) && (mois == 4 || mois == 6 || mois == 9 || mois == 11 ))
      {
         return true;
      }
      else
      {
         if ((jour >=1 && jour <=28) && mois == 2 && !etreBissextile(annee))
         {
            return true;
         }
         else
         {
            if ((jour >= 1 && jour <=29) &&mois == 2 && etreBissextile(annee))
            {
               return true;
            }
         }
      }
   }


      return false;

}

bool etreBissextile(int annee)
{

   if (annee %4 ==0 && annee %100 !=0 || annee %400 ==0)
   {


      return true;
   }

   return false;
}
