/*******************************************************
Nom ......... : blink_del.c
Role ........ : Test de la del GPIO 18 en la faisant clignoter
Auteur ...... : Valentin Guiberteau Axel Facqueur Corentin Destrez
Version ..... : V0.1 du 17/09/2020
Commentaire . : Code inspiré des exemples sur https://github.com/WiringPi/WiringPi/blob/master/examples/blink.c
********************************************************/

#include <stdio.h>
#include <wiringPi.h>
#include <string.h>



int main (int argc, char *argv[])
{
  int ledNumber;
  if(argc != 2) {
    puts("Veuillez uniquement entrer le numéro wPi du port sur lequel la DEL est branchee.");
    return 1;
  }
  
  if (strlen(argv[1]) > 2) {
    puts("Le numéro ne peut être composé que de 2 chiffres au plus");
    return 1;
  }
  
  if (strlen(argv[1]) == 2) {
    if(argv[1][0] >= '0' && argv[1][0] <= '9')
      ledNumber = 10 * (argv[1][0] - 48);
    else
      puts("Ce ne peut-être qu'un numéro");
    if(argv[1][1] >= '0' && argv[1][1] <= '9')
      ledNumber = argv[1][1] - 48;
    else
      puts("Ce ne peut-être qu'un numéro");
  }
  else {
    if(argv[1][0] >= '0' && argv[1][0] <= '9')
      ledNumber = argv[1][0] - 48;
    else
      puts("Ce ne peut-être qu'un numéro");
  }
  
  printf("%d\n", ledNumber);
  
  wiringPiSetup () ;
  pinMode (ledNumber, OUTPUT) ;


  for (;;)
  { // temps modifié pour correspondre au temps dans le script bash
    digitalWrite (ledNumber, HIGH) ;	// On
    delay (1000) ;		// mS
    digitalWrite (ledNumber, LOW) ;	// Off
    delay (1000) ;
  }
  return 0 ;
}
