#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "morse.h"

// affiche un tiret
char t(int Mod)
{
    if(Mod==0)
        return '-';
    else
        return '-';
}

// affiche un point
char p(int Mod)
{
    if(Mod==0)
        return 'o';
    else
        return 'o';
}

// traduit l'alphabet en morse en prennant un param�tre pour le mode de traduction (0 morse �crit)
void traduction(char lettre, int Mod)
    {
        switch(lettre)
        {
            case 'a':
                printf("%c%c", p(Mod), t(Mod));
                break;
            case 'b':
                printf("%c%c%c%c", t(Mod),p(Mod),p(Mod),p(Mod));
                break;
            case 'c':
                printf("%c%c%c%c", t(Mod),p(Mod),t(Mod),p(Mod));
                break;
            case 'd':
                printf("%c%c%c", t(Mod),p(Mod),p(Mod));
                break;
            case 'e':
                printf("%c", p(Mod));
                break;
            case 'f':
                printf("%c%c%c%c", p(Mod),p(Mod),t(Mod),p(Mod));
                break;
            case 'g':
                printf("%c%c%c", t(Mod),t(Mod),p(Mod));
                break;
            case 'h':
                printf("%c%c%c%c", p(Mod),p(Mod),p(Mod),p(Mod));
                break;
            case 'i':
                printf("%c%c", p(Mod),p(Mod));
                break;
            case 'j':
                printf("%c%c%c%c", p(Mod),t(Mod),t(Mod),t(Mod));
                break;
            case 'k':
                printf("%c%c%c", t(Mod),p(Mod),t(Mod));
                break;
            case 'l':
                printf("%c%c%c%c", p(Mod),t(Mod),p(Mod),p(Mod));
                break;
            case 'm':
                printf("%c%c", t(Mod),t(Mod));
                break;
            case 'n':
                printf("%c%c", t(Mod),p(Mod));
                break;
            case 'o':
                printf("%c%c%c", t(Mod),t(Mod),t(Mod));
                break;
            case 'p':
                printf("%c%c%c%c", p(Mod),t(Mod),t(Mod),p(Mod));
                break;
            case 'q':
                printf("%c%c%c%c", t(Mod),t(Mod),p(Mod),t(Mod));
                break;
            case 'r':
                printf("%c%c%c", p(Mod),t(Mod),p(Mod));
                break;
            case 's':
                printf("%c%c%c", p(Mod),p(Mod),p(Mod));
                break;
            case 't':
                printf("%c", t(Mod));
                break;
            case 'u':
                printf("%c%c%c", p(Mod),p(Mod),t(Mod));
                break;
            case 'v':
                printf("%c%c%c%c", p(Mod),p(Mod),p(Mod),t(Mod));
                break;
            case 'w':
                printf("%c%c%c", p(Mod),t(Mod),t(Mod));
                break;
            case 'x':
                printf("%c%c%c%c", t(Mod),p(Mod),p(Mod),t(Mod));
                break;
            case 'y':
                printf("%c%c%c%c", t(Mod),p(Mod),t(Mod),t(Mod));
                break;
            case 'z':
                printf("%c%c%c%c", t(Mod),t(Mod),p(Mod),p(Mod));
                break;
            default:
                break;
        }
    }

int main()
{
    /*
    Penser � la gestion des majuscules
    Penser � la gestion des chiffres
    Trouver un moyen de faire un signal court / long
    */

    //char p = 'o';
    //char t = '-';



    /***************************/

    int select = 0, i = 0, Mod=0;
    char mot[] = "chanson vraiment bien";
    char wait[] = ""; //permet d'attendre la pression d'une touche

    while (select != -1)
    {
        printf("\tTraduction Morse\n\n");

        printf("1 - Modifier le texte initial\n");
        printf("2 - Traduction textuelle\n");
        printf("3 - Traduction physique\n");
        printf("4 - Quitter l'application\n");


        printf("\nA traduire : %s\n", mot);

        printf("\nVotre choix : "); scanf("%d", &select);

        switch(select)
        {
            case 1:
                printf("Texte a traduire : ");
                gets(mot); gets(mot);
                select = 0;
                break;

            case 2:
                printf("Vous avez choisi la traduction textuelle\n\n");
                Mod=0;
                while(mot[i]!='\0')
                {
                    printf("%c : ", mot[i]);
                    traduction(mot[i], Mod);
                    printf("\n");
                    i++;
                }
                i=0;
                gets(wait); gets(wait);
                select = 0;
                break;

            case 3:
                printf("Vous avez choisi la traduction physique");
                Mod=1;
                gets(wait); gets(wait);
                select = 0;
                break;

            case 4:
                select = -1;
                break;

            default:
                break;
        }
    }


    /*
    char mot[] = "chanson vraiment bien";

    printf("Texte a traduire : ");
    gets(mot);
    //scanf("%s", &mot);
    printf("\n");

    int i=0;
    while(mot[i]!='\0')
    {
        printf("%c : ", mot[i]);
        traduction(mot[i]);
        printf("\n");
        i++;
    }
    */

    /*
    for(i=0; i)
    traduction('o');
    */
    return 0;
}
