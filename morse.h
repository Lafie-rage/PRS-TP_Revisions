/* contient la conversion d'un caractère (ascii entre 46 et 90) en morse.
L'indexation commence avec "."[0] et termine à "Z"[44]
*/
const char MORSE[44][7] = {
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
  "--..", // Z
}

const int TAILLE_CARACTERE_MORSE = 7

char* traductionVersMorse(char* message);
