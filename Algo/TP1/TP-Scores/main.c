#include "listes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "useListe.h"


int main2()
{
/*
    printf("Début du programme Liste\n");
    liste l;
    int i;
    int n=10;

    init(&l);
    for(i=0;i<n;i++)
        ajoutePos(&l,i,i+1);

    affiche(l);

    detruire(&l);
    return 0;
*/
/*
    srand(time(NULL));

    liste l;
    int i;
    int n=11;
    int alea;

    init(&l);
    for(i=0;i<n;i++){
        alea = rand()%101;
        ajoutePos(&l , alea , i+1);
    }

    affiche(l);

    for(i=0;i<5;i++){

        alea = rand()%30;
        ajouteEnTete(&l , alea);
        affiche(l);
    }

    printf("Voici le 4eme element : %i\n\n",getValeur(l , 4));

    ajoutePos(&l , getValeur(l,4) , -50);
    affiche(l);
    setValeur(l , 100 , 4);
    affiche(l);

    detruire(&l);
*/
/*
62
53
94
76
15
55
97
89
90
12
80

2
62
53
94
76
15
55
97
89
90
12
80

20
2
62
53
94
76
15
55
97
89
90
12
80

16
20
2
62
53
94
76
15
55
97
89
90
12
80

1
16
20
2
62
53
94
76
15
55
97
89
90
12
80

18
1
16
20
2
62
53
94
76
15
55
97
89
90
12
80

Voici le 4eme element : 20

18
1
16
20
2
62
53
94
76
15
55
97
89
90
12
80

18
1
16
100
2
62
53
94
76
15
55
97
89
90
12
80


Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

*/
/*

    printf("Début du teste useListe\n");
    liste l;
    int i;
    int n=10;

    init(&l);
    for(i=0;i<n;i++)
        ajoutePos(&l,i,i+1);

    affiche(l);

    afficheNPremieresValeurs(l , 15);

    detruire(&l);

*/

/*

    printf("Question 19\n");
    liste l;
    int i,j;
    int n=5;

    init(&l);
    for(i=0;i<n;i++)
        ajoutePos(&l,4*(n-i),i+1);

    affiche(l);


    for(j = 0; j <6; j++){
        printf("Position de %i : %i \n", 5*j,getPositionDecroissant(l,5*j));

    }

    detruire(&l);

*/
    return 0;
}
