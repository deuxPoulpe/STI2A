#include "tri.h"
#include <stdio.h>

Triplet initTriplet(int a , int b ,int c){
Triplet triplet;

triplet.p = a;
triplet.d = b;
triplet.t = c;

return triplet;
}

void afficheTriplet(Triplet triplet){

 printf("Triplet (%i %i %i)",triplet.p,triplet.d,triplet.t);

}

Triplet triTriplet(Triplet tri){

Triplet tri2;
int a,b,c;

if (tri.p + tri.d <= tri.t){
    if (tri.p <= tri.d){
        a=tri.p;
        b=tri.d;
        c=tri.t;
    }
    else{
        a=tri.d;
        b=tri.p;
        c=tri.t;
    }

}
else if (tri.p + tri.t <= tri.d){
    if (tri.p <= tri.t){
        a=tri.p;
        b=tri.t;
        c=tri.d;
    }
    else{
        a=tri.d;
        b=tri.t;
        c=tri.d;
    }

}
else{
    if (tri.d <= tri.t){
        a=tri.d;
        b=tri.t;
        c=tri.p;
    }
    else{
        a=tri.t;
        b=tri.d;
        c=tri.p;
    }

}


tri2 = initTriplet(a , b , c);
return tri2;

}


void triTriplet2(Triplet *triplet) {

int tmp1,tmp2,tmp3;

if (triplet->p <= triplet->d) {
    if (triplet->p <= triplet->t){
        triplet->p = triplet->p;
        tmp1 = triplet->d;
        triplet->d = triplet->t;
        triplet->t = tmp1;
        }
    else {
        tmp1 = triplet->p;
        tmp2 = triplet->d;
        triplet->p = triplet->t;
        triplet->d = tmp1;
        triplet->t = tmp2;
         }
    }
if (triplet->d <= triplet->p) {
    if(triplet->p <= triplet->t) {
        tmp1 = triplet->p;
        triplet->p = triplet->d;
        triplet->d = tmp1;
    }
    else if (triplet->d <= triplet->t) {
        tmp1 = triplet->p;
        tmp2 = triplet->d;
        tmp3 = triplet->t;
        triplet->p = tmp2;
        triplet->d = tmp3;
        triplet->t = tmp1;
        }
    else {
        tmp1 = triplet->p;
        tmp2 = triplet->t;
        triplet->p = tmp3;
        triplet->t = tmp1;
        }
}

}
