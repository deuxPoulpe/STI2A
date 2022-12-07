#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED


typedef struct{

    int score; //score du joueur
    char* nom; //nom du joueur

}Element;

//cette version est plus performante car elle n'alloue que ce qu'il faut de memoire contrairement a char nom[255] qui prend un nombre finis d'octet

#endif // ELEMENT_H_INCLUDED
