#ifndef USELISTE_H_INCLUDED
#define USELISTE_H_INCLUDED
#include "listes.h"






/*******************************************//**
 * @brief Affiche les n premier Element d'une liste
 *
 * @author Y. Lakhdari
 * @date 07/12/2022
 * @param l liste : liste à Afficher , n int : le n Element a afficher
 * @return void
 * @complexity O(n)
 *
 *En effet, ocmme on affiche les n premier nombre la complexiter est de O(n)
 *On ne pourrait pas faire mieux sans perte dans l'affichage
 *
 ***********************************************/


void afficheNPremieresValeurs(liste l , int pos);




/*******************************************//***
 * @brief Retourne la position de la valeur entrée en parametre
 * @author Y. Lakhdari
 * @date 07/12/2022
 * @pre la liste doit etre dans l'odre decroissant
 * @param l liste : liste à Afficher , n int : l'Element x
 * @return int
 * @complexity O(n)
 ************************************************/

int getPositionDecroissant(liste l , int x);


/*******************************************//***
 * @brief Affiche le meilleur score d'un joueur
 * @author Y. Lakhdari
 * @date 07/12/2022
 * @pre la liste doit etre dans l'odre decroissant
 * @param l liste : liste à Afficher , Element player : un joueur fictif avec le meme nom du joueur
 * @return void
 * @complexity O(n)
 ************************************************/


void meilleurScoreJoueur(liste l , Element player);


/*******************************************//***
 * @brief Affiche les score d'un joueur
 * @author Y. Lakhdari
 * @date 07/12/2022
 * @pre la liste doit etre dans l'odre decroissant
 * @param l liste : liste à Afficher , Element player : un joueur fictif avec le meme nom du joueur
 * @return void
 * @complexity O(n)
 ************************************************/

void AllScoreJoueur(liste l , Element player);

/*******************************************//***
 * @brief Cree un liste en combinant les score des joueur
 * @author Y. Lakhdari
 * @date 07/12/2022
 * @param l liste : liste à Afficher
 * @return void
 * @complexity O(n)
 ************************************************/

liste crerListeCumul(liste l);


#endif // USELISTE_H_INCLUDED
