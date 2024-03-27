#include <stdio.h>
#include <stdlib.h>


int main () {
float velocidad;
int auto1;
int auto2;
int D;
double TiempoEncuentro;
double Dauto1;
double Dauto2;
 printf("Ingresa una velocidad (km/h): ");
    scanf("%f", &velocidad);
 auto1 = 70;
 auto2 = 150;
 D = auto2 - auto1;
 TiempoEncuentro = D / (velocidad * 2);
 Dauto1 = auto1 * TiempoEncuentro;
 Dauto2 = auto2 * TiempoEncuentro;



printf("Se encontraran en %f horas\n ", TiempoEncuentro);
printf("En ese momento el uno de los autos habra habra hecho %f kms \n", Dauto1);
printf("mientras que el otro auto hizo %f kms \n", Dauto2);
}