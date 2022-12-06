#include <stdio.h>
#include <stdlib.h>
#include "tri.h"

int main()
{

    int a = 16;
    int b = 7;
    int c = 23;
    Triplet t,t2;


    t = initTriplet( a , b , c );
    t2 = initTriplet( c , b , a );


    afficheTriplet(t);
    printf("\t");
    afficheTriplet(t2);
    printf("\n");
    afficheTriplet(triTriplet(t));
    printf("\t");
    triTriplet2(&t2);
    afficheTriplet(t2);




    return 0;
}
