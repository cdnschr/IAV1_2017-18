/*
    Mein erster Dezimal in Binär Umrechner - Version 0.2

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int zahl = 0;
  int *array;
  int temp;
  int i = 0;

  printf("Bitte die Dezimalzahl eingeben.\n");

  scanf("%d", &zahl);

  temp = zahl;

  while (temp > 0) {      //Hier wird erstmal ermittelt wie groß das Array sein soll
    temp /= 2;
    i++;
    printf("Durchgang: %d Ergebnis: %d \n", i, temp );
  }

  array = (int *) malloc(i * sizeof(int));  //dynamisches Array

  while (zahl > 0){     //Array wird mit Binärwert gefüllt
    temp++;
    array[temp] = zahl % 2;
    zahl /= 2;

  }
  printf("Umgerechneter Binärwert: ");
  while (temp > 0){  //Ausgabe des Arrays
    printf("%d", array[temp]);
    temp--;
  }
  printf("\n");

  return 0;
}
