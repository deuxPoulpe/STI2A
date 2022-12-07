#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
   time_t time1; //pour la temporisation de simulation de jeu
   time_t time2;

   int var=-1;
   char *nom;
   int score;
   srand(time(NULL));//lié à la fonction aléatoire

/* Affichage du premier menu à l'utilisateur*/
	printf("------------------\nFaites votre choix\n------------------\n");
	printf("0 - Jouer!\n");
	printf("1 - Afficher tous les scores\n");
	printf("2 - Afficher le top 3\n");
	printf("3 - Afficher le top 10\n");
	printf("4 - Effacer les scores\n");
	printf("5 - Affichage du meilleur score d'un joueur\n");
	printf("6 - Affichage de tous les scores d'un joueur\n");
	printf("7 - Cumuler les scores\n");
	printf("8 - Fermer\n");
	scanf("%d",&var);

	/* Lancement de la boucle d'affichage du menu*/
	while(var!=8)
	{

		switch(var)
		{

		case 0 :
			/* Obtention du nom du joueur et de son score */
			printf("Entrez votre nom :");
			fflush(stdin);
			nom = malloc(100*sizeof(char));
			scanf("%s", nom);
            time(&time1);
            time(&time2);
            while(difftime(time2,time1)<3)  //valeur de temporisation en secondes, réduisez là pour tester votre programme plus vite
            {
                time(&time2);
            }
            score= rand()%500;
            printf("\n\nBravo %s vous avez obtenu le score de %i\n\n",nom,score);
            /****************   QUESTION 18  *******************/



			break;

		case 1 :

			/****************   QUESTION 15  *******************/
            printf("\nA faire, au boulot !!\n");

			break;

		case 2 :
			/****************   QUESTION 16  *******************/
			printf("\nA faire, au boulot !!\n");


			break;

		case 3 :
			/****************   QUESTION 17  *******************/
			printf("\nA faire, au boulot !!\n");

			break;

		case 4 :
		    /****************   QUESTION 19  *******************/
			printf("\nA faire, au boulot !!\n");


			break;

        case 5 :
		    /****************   QUESTION 25  *******************/
			printf("\nA faire, au boulot !!\n");



			break;

        case 6 :
		    /****************   QUESTION 28  *******************/
		    			printf("\nA faire, au boulot !!\n");



			break;
        case 7 :
		    /****************   QUESTION 29  *******************/
			printf("\nA faire, au boulot !!\n");


			break;

		default :
			/* Choix non-gérés par le programme */
			printf("\nCe choix est impossible!\n");
			fflush(stdin); // Vide le tampon pour éviter un bug quand on entre un caractère et non un chiffre
			break;

		}

    printf("------------------\nFaites votre choix\n------------------\n");
	printf("0 - Jouer!\n");
	printf("1 - Afficher tous les scores\n");
	printf("2 - Afficher le top 3\n");
	printf("3 - Afficher le top 10\n");
	printf("4 - Effacer les scores\n");
	printf("5 - Affichage du meilleur score d'un joueur\n");
	printf("6 - Affichage de tous les scores d'un joueur\n");
	printf("7 - Cumuler les scores\n");
	printf("8 - Fermer\n");
	scanf("%d",&var);

	}
	return 0;
}

