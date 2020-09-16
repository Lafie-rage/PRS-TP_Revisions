/*******************************************************
Nom ......... : main.c
Role ........ : Dialogue avec l'utilisateur et appel la librairie morse
Auteur ...... : Valentin Guiberteau Axel Facqueur Corentin Destrez
Version ..... : V0.1 du 16/09/2020
********************************************************/

#include <stdio.h>
/*#include <string.h>
#include <ctype.h>*/
#include "morse.h"

/* contient la conversion d'un caractère (ascii entre 46 et 90) en morse.
L'indexation commence avec "."[0] et termine à "Z"[44]
*/
/*const char MORSE[45][7] = {
  ".-.-.-\0", // .
  "", //      ON IGNORE CE CARACTERE
  "-----\0", // 0
  ".----\0", // 1
  "..---\0", // 2
  "...--\0", // 3
  "....-\0", // 4
  ".....\0", // 5
  "-....\0", // 6
  "--...\0", // 7
  "---..\0", // 8
  "----.\0", // 9
  "", // :    ON
  "", // ;    IGNORE
  "", // <    CES
  "", // =    CARACTERES
  "", // >
  "", // ?
  "", // @
  ".-\0", // A
  "-...\0", // B
  "-.-.\0", // C
  "-..\0", // D
  ".\0", // E
  "..-.\0", // F
  "--.\0", // G
  "....\0", // H
  "..\0", // I
  ".---\0", // J
  "-.-\0", // K
  ".-..\0", // L
  "--\0", // M
  "-.\0", // N
  "---\0", // O
  ".--.\0", // P
  "--.-\0", // Q
  ".-.\0", // R
  "...\0", // S
  "-\0", // T
  "..-\0", // U
  "...-\0", // V
  ".--\0", // W
  "-..-\0", // X
  "-.--\0", // Y
  "--..\0" // Z
};

const int TAILLE_CARACTERE_MORSE = 7;*/

const int MAX_SENTENCE_LENGTH = 250;

//const char* traductionVersMorse(char* message);

int main()
{
	int select = 0,i=0, Mod=0;

	// Mot temporaire pour débug au lieu de retaper à chaque fois du texte
	char mot[MAX_SENTENCE_LENGTH];

	while (select != -1)
    {
        printf("\tTraduction Morse\n\n");

        printf("1 - Modifier le texte a traduire\n");
        printf("2 - Traduction a l'ecran en texte\n");
        printf("3 - Traduction vers du materiel\n");
        printf("0 - Quitter l'application\n");

        scanf("%d", &select);
        fgetc(stdin); // Eviter le \n du scanf précédent...

		switch(select)
        {
            case 1:
                printf("Texte a traduire : \n");
                fgets(mot, MAX_SENTENCE_LENGTH, stdin);
                break;

            case 2:
                printf("Vous avez choisi la traduction textuelle\n\n");
                Mod=0;
                /*while(mot[i]!='\0')
                {
                    printf("%c : ", mot[i]);
                    traduction(mot[i], Mod);
                    printf("\n");
                    i++;
                }*/
                printf("%s\n\n\n", traductionVersMorse(mot));
                i=0;
                break;

            case 3:
                printf("Vous avez choisi la traduction physique");
                Mod=1;
                break;

            default:
              return 0;
                break;
		}
	}
	return 0;
}
