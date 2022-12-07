#ifndef LISTE_HHH
#define LISTE_HHH

#include <stdio.h>
#include <stdlib.h>
#include "element.h"

/** \brief Une cellule d'une liste simplement chainee
 */
typedef struct cellule
{
  Element valeur;
  struct cellule* suivant;
}cellule;



/** \brief Définition d'une liste comme un pointeur sur cellule
 *
 */
typedef struct
{      cellule* pt_tete;
}liste;


//Vrai bug: il faut changer le prototype pour simuler le IN/OUT de la liste
// void init(liste);
/********************************************//**
 * @brief Initialisation de la liste par la liste vide
 *
 * @author P. Berthomé
 * @param l liste* : liste à initialiser
 * @return void
 *
 * \complexity O(1)
 *
 ***********************************************/
void init(liste* l);



/********************************************//**
 * @brief Indique si la liste passé en paramètre est vide
 *
 * @author P. Berthomé
 * @param l liste: liste à tester
 * @return int : en fait un booléen
 * @complexity : 0(1)
 *
 ***********************************************/
int estVide(liste l);


/********************************************//**
 * @brief Ajoute une cellule en tête de liste
 *
 * Ajoute une cellule en tête de la liste passée en paramètre.
 * La première cellule contiendra la valeur de l'élément passé en paramètre
 * Il faut faire attention que la liste en entrée soit valide
 * @author P. Berthomé
 * @param l liste* : liste à compléter
 * @param x Element : élément à rajouter à la liste
 * @return void
 * @complexity  O(1)
 *
 ***********************************************/
void ajouteEnTete(liste* l ,Element x);

/********************************************//**
 * @brief Affiche la liste du premier au dernier élément
 *
 * @author P. Berthomé
 * @param l liste : liste à afficher
 * @return void
 * @complexity  O(n)
 *
 ***********************************************/
void affiche(liste l);


// Vrai bug = Oubli d'un ; --> provoque la panique dans la compilation
/********************************************//**
 * @brief calcule la taille de la liste, c'est-à-dire, le nombre d'éléments dans la liste
 *
 * @author P. Berthomé
 * @param l liste : liste à mesurer
 * @return int : Nombre d'éléments dans la liste
 *
 * @complexity O(nombre d'éléments dans la liste)
 *
 ***********************************************/
int tailleListe(liste l);


/********************************************//**
 * @brief Remet la liste à la liste vide.  Elle le fait proprement: les cellules sont rendues à la mémoire centrale
 *
 * @author P. Berthomé
 * @param l liste* : liste à réinitialiser
 * @return void
 * @complexity O(n)
 *
 ***********************************************/
void detruire(liste* l);


/********************************************//**
 * @brief Ajoute une cellule à la liste en position pos
 *
 * @author P. Berthomé
 * @param maListe liste* : Liste à compléter
 * @param x Element : élément à mettre dans la cellule
 * @param pos int : position de la cellule: la première cellule est la n°1
 * @return void
 *
 * @complexity O(pos)
 ***********************************************/
void ajoutePos(liste* maListe,Element x,int pos );


/********************************************//**
 * @brief Donne la valeur dans la liste à une certaine position
 *
 * @author P. Berthomé
 * @param maListe liste : liste à explorer
 * @param pos int : position à rechercher
 * @return Element : l'élément qui sera trouvé
 *
 * @complexity O(pos)
 ***********************************************/
Element getValeur(liste maListe,int pos );


/********************************************//**
 * @brief Modifie la valeur d'une cellule
 *
 * @author P. Berthomé
 * @param maListe liste : liste à modifier
 * @param x Element : l'élément qui doit remplacer l'élément présent
 * @param pos int : position à modifier
 * @return void
 *
 * @complexity O(pos)
 ***********************************************/
void setValeur(liste maListe,Element x,int pos );

#endif // LISTE_HHH
