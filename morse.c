#include <string.h>
#include <ctype.h>
#include "morse.h"

char* traductionVersMorse(char* message) {
  char messageTraduit[(strlen(message) -1) * TAILLE_CARACTERE_MORSE + 1];
  char caractereMorse[TAILLE_CARACTERE_MORSE];
  int cmpMessageTraduit = 0;
  for (int i = 0; i < strlen(message); i++) { // Mise en majuscule du message.
      message[i] = toupper(message[i]);
  }

  for(int i = 0; i < strlen(message); i++) { // Traduction du message en morse
    if(message[i] == ' ') strcat(caractereMorse, " / ");
    strcat(caractereMorse, MORSE[message[i]-46]);
    
    for (int j = 0; j < TAILLE_CARACTERE_MORSE; j++) {
      messageTraduit[cmpMessageTraduit++] = caractereMorse[j];
    }
   messageTraduit[cmpMessageTraduit++] = ' ';  
  }

}
