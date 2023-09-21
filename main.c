#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>




int main()
{

     char nomsEnMemoire[][50] = {"haytam", "israe", "adham", "charki", "amal"};
    int nbNoms = sizeof(nomsEnMemoire) / sizeof(nomsEnMemoire[0]),chx;

    char nomUtilisateur[50],type;
    time_t vary;
    time(&vary);

    printf("                                                                                    %s\n",ctime(&vary));

     printf("          fichier de la famille raba\n\n\n\n");


     printf("Etes-vous un homme ou une femme?\n");
             printf("si F:1|M:2 :");
            scanf("%d",&type);


    printf("Entrez un nom : ");
    scanf("%s", nomUtilisateur);


    int trouve = 0;
    for (int i = 0; i < nbNoms; i++) {
        if (strcmp(nomUtilisateur, nomsEnMemoire[i]) == 0) {
            trouve = 1;
            break;
        }
    }
    printf("attendez 3 secondes\n");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");



    if (trouve) {

        if(type==1)  {
                printf("bienvenue mme %s RABA \n", nomUtilisateur);

        }
        if(type==2)  {
                printf("bienvenue mr %s RABA \n", nomUtilisateur);

        }



do { printf("  MENU:\n");

        printf("1- date de naissance \n");
        printf("2- lieu de naissance\n");
        printf("3-origine\n");
        printf("4-nationalite\n");
        printf("0-quitter\n");

printf("**********************\n");
       printf("c est quoi votre choix:\n");
       scanf("%d",&chx);
printf("**********************\n");

      switch(chx)
     {
    case 1:{ printf("votre  date de naissance est : 26|11|2004 \n");break;}
    case 2:{printf("lieu de naissance est: MARRAKECH\n"); break; }
    case 3:  {printf("votre origine est: Bejaad\n");break;}
    case 4: {printf("votre nationalite est: Marocaine\n");break;}

    }
}while(chx!=0);



    } else {
        printf("vous n avez pas un membre de la famille raba.\n");
    }
    printf("__________________________________________________________________________________________________\n\n\n");
    printf("                ce programme est realise par l ingenieur Haytam Raba\n\n\n");
    printf("______________________________________________________________________________________________________\n");
    return 0;
}
