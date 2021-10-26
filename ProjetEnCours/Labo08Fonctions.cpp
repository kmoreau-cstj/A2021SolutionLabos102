#include "Labo08Fonctions.h"

int genererAlea(int min, int max)
{
   // NE JAMAIS mettre srand dans une fonction autre que le MAIN
   //srand(time(NULL));
   return rand() % (max -min +1)+ min ;
}
