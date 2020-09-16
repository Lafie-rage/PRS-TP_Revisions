#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "morse.h"

const char MORSE[45][7] = {
  ".-.-.-", // .
  "", //      ON IGNORE CE CARACTERE
  "-----", // 0
  ".----", // 1
  "..---", // 2
  "...--", // 3
  "....-", // 4
  ".....", // 5
  "-....", // 6
  "--...", // 7
  "---..", // 8
  "----.", // 9
  "", // :    ON
  "", // ;    IGNORE
  "", // <    CES
  "", // =    CARACTERES
  "", // >
  "", // ?
  "", // @
  ".-", // A
  "-...", // B
  "-.-.", // C
  "-..", // D
  ".", // E
  "..-.", // F
  "--.", // G
  "....", // H
  "..", // I
  ".---", // J
  "-.-", // K
  ".-..", // L
  "--", // M
  "-.", // N
  "---", // O
  ".--.", // P
  "--.-", // Q
  ".-.", // R
  "...", // S
  "-", // T
  "..-", // U
  "...-", // V
  ".--", // W
  "-..-", // X
  "-.--", // Y
  "--.." // Z
};

const int TAILLE_CARACTERE_MORSE = 7;

const char* traductionVersMorse(char* message) {
  int i = 0,
	  j = 0;
  char *messageTraduit = malloc((strlen(message) -1) * TAILLE_CARACTERE_MORSE + 1);
  char caractereMorse[TAILLE_CARACTERE_MORSE];
  int cmpMessageTraduit = 0;
  while(message[i] != '\0') {
    message[i] = toupper(message[i]);
    i++;
  }
  i = 0;
  while(message[i] != '\n') { // Traduction du message en morse
    if(message[i] == ' ') strcpy(caractereMorse, " / ");
    else strcpy(caractereMorse, MORSE[message[i]-46]);
    while(caractereMorse[j] != '\0') {
      messageTraduit[cmpMessageTraduit] = caractereMorse[j];
      cmpMessageTraduit++;
      j++;
    }
    j = 0;
    i++;
   messageTraduit[cmpMessageTraduit++] = ' ';
  }
  return messageTraduit;
}
