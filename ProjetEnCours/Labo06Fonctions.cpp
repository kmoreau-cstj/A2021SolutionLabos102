#include "Labo06Fonctions.h"


bool etreUnNombre(string clavier)
{
   // Est-ce que clavier commence par un chiffre
   if (!clavier.empty() && clavier.at(0) >= '0' && clavier[0] <= '9')
   {
      return true;
   }
   else if (clavier.size() >= 2 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier[1] <='9')
   {
      return true;
   }
   else
   {
      return false;
   }

}
