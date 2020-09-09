/*******************************************************
Nom ......... : main.c
Role ........ : Dialogue avec l'utilisateur et appel la librairie morse
Auteur ...... : Valentin Guiberteau Axel Facqueur Corentin Destrez
Version ..... : V0.1 du 16/09/2020
********************************************************/

#include <stdio.h>

int main()
{
	int select = 0,i=0, Mod=0;
	
	// Mot temporaire pour débug au lieu de retaper à chaque fois du texte
	char mot[255] = "chanson vraiment bien";
	
	while (select != -1)
    {
        printf("\tTraduction Morse\n\n");

        printf("1 - Modifier le texte a traduire\n");
        printf("2 - Traduction a l'ecran en texte\n");
        printf("3 - Traduction vers du materiel\n");
        printf("4 - Quitter l'application\n");

        scanf("%d", &select);
	
		switch(select)
        {
            case 1:
                printf("Texte a traduire : \n");
                scanf("\n%[^\n]s",&mot);
                break;

            case 2:
                printf("Vous avez choisi la traduction textuelle\n\n");
                Mod=0;
                while(mot[i]!='\0')
                {
                    printf("%c : ", mot[i]);
                    //traduction(mot[i], Mod);
                    printf("\n");
                    i++;
                }
                i=0;
                break;

            case 3:
                printf("Vous avez choisi la traduction physique");
                Mod=1;
                break;

            case 4:
                select = -1;
                break;

            default:
                break;
		}
	}
	
	return 0;
}
