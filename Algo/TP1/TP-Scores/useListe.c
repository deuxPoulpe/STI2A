#include "listes.h"
#include <string.h>

void afficheNPremieresValeurs(liste l , int n){

    int i,len;

    len = tailleListe(l);
    if (len < n){
        printf("Erreur : la valeur entrée en parametre est plus grande que la taille de la liste!\n");
        printf("la valeur entrée en parametre prend donc la valeur la taille de la liste.\n");
        n = len;
    }

    for (i=0;i<n;i++){

            printf("%i \t%s\n",getValeur(l , i+1).score,getValeur(l , i+1).nom);

    }


}



int getPositionDecroissant(liste l , Element x){

    int i,len;

    len = tailleListe(l);
    for(i=0;i<len;i++){
       if(getValeur(l , i+1).score <= x.score ){
        return i+1;
        }

    }
    return len+1;

}


void meilleurScoreJoueur(liste l , Element player){

    int i,exit;
    for(i=0;i<tailleListe(l);i++){

        if (strcmp(getValeur(l , i+1).nom , player.nom) == 0){

            printf("Le meilleur score de %s est de : %i\n\n",player.nom,getValeur(l , i+1).score);
            exit = 1;
            break;
        }
    }

    if (exit != 1){
        printf("Joueur non trouvé.\n\n");
    }


}

void AllScoreJoueur(liste l , Element player){

    int i,exit;
    for(i=0;i<tailleListe(l);i++){

        if (strcmp(getValeur(l , i+1).nom , player.nom) == 0){

            printf("%i\n",getValeur(l , i+1).score);
            exit = 1;
        }
    }

    if (exit != 1){
        printf("Joueur non trouvé.\n\n");
    }
    else{
        printf("Voici tout les scores de %s\n\n",player.nom);
    }


}



liste crerListeCumul(liste l){

 liste nl;
 init(&nl);
 int i,j,k;
 Element player;
 int score_tot;
 int exit;

 for(i=0;i<tailleListe(l);i++){

    player.nom = getValeur(l , i+1).nom;
    player.score=0;
    if (tailleListe(nl) != 0 ){
    for(k=0;j<tailleListe(nl);k++){
            if (strcmp(getValeur(nl , k+1).nom , player.nom) == 0){
                exit = 1;
            }

        }
    if (strcmp(getValeur(nl , 1).nom , player.nom) == 0){
                exit = 1;
            }

    }

    //test si le joueur n'est pas deja dans la nouvelle liste

    for(j=0;j<tailleListe(l);j++){


        if ((strcmp(getValeur(l , j+1).nom , player.nom) == 0) && exit !=1 ){

            score_tot+=getValeur(l , j+1).score;

            //somme tout les score du joueur

        }
    }

    if (exit != 1){
    player.score=score_tot;
    score_tot=0;
    ajoutePos(&nl , player , getPositionDecroissant(nl , player));
    }


    exit = 0;


 }

 return nl;

}


