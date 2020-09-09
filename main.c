/*******************************************************
Nom ......... : main.c
Role ........ : Dialogue avec l'utilisateur et appel la librairie morse
Auteur ...... : Valentin Guiberteau Axel Facqueur Corentin Destrez
Version ..... : V0.1 du 16/09/2020
********************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* contient la conversion d'un caractère (ascii entre 46 et 90) en morse.
L'indexation commence avec "."[0] et termine à "Z"[44]
*/
const char MORSE[45][7] = {
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

const int TAILLE_CARACTERE_MORSE = 7;

char* traductionVersMorse(char* message);

char t(int Mod);
char p(int Mod);
void traduction(char lettre, int Mod);


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
                    traduction(mot[i], Mod);
                    printf("\n");
                    i++;
                }
                //printf("%s", traductionVersMorse(mot));
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


char* traductionVersMorse(char* message) {
  int i = 0,
	  j;
  char messageTraduit[(strlen(message) -1) * TAILLE_CARACTERE_MORSE + 1];
  char caractereMorse[TAILLE_CARACTERE_MORSE];
  int cmpMessageTraduit = 0;
  while(message[i] != '\0') {
	  printf("%d", i);
      message[i] = toupper(message[i++]);
  }
  printf("MESSAGE : %s\n", message);
	
  while(message[i] != '\0') { // Traduction du message en morse
	printf("%d", cmpMessageTraduit);
    if(message[i] == ' ') strcat(caractereMorse, " / ");
    else strcat(caractereMorse, MORSE[message[i]-46]);
    i++;
    while(caractereMorse[i] != '\n' && caractereMorse[i] != '\0') {
      messageTraduit[cmpMessageTraduit++] = caractereMorse[j];
    }
   messageTraduit[cmpMessageTraduit++] = ' ';  
  }

}

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

