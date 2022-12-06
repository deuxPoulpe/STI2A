#ifndef TRI_H_INCLUDED
#define TRI_H_INCLUDED


typedef struct{
    int p;
    int d;
    int t;


}Triplet;



/**
* @brief ordonne un Triplet passé en parametre et en renvoie un autre
* @param un Triplet t
* @return un Triplet ordonné
*/


Triplet triTriplet(Triplet t);



/**
* @brief ordonne un Triplet passé en parametre et modifie ce Triplet
* @param l'adresse d'un Triplet t
* @return NONE
*/


void triTriplet2(Triplet *t);



/**
* @brief Affiche un Triplet passé en parametre
* @param un Triplet t
* @return NONE
*/


void afficheTriplet(Triplet t);


/**
* @brief Tnitialise un Triplet passé en parametre
* @param a , b et c trois int
* @return un triplet de valeut (a,b,c)
*/



Triplet initTriplet(int a , int b ,int c);

#endif // TRI_H_INCLUDED
