# EJERCICIO
/* Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. 
dicha calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final.
15% de la calificación de un trabajo final. */


#include <stdio.h>
#include <stdlib.h>

int main () {
   float parcial1;
   float parcial2;
   float parcial3;
   printf("Nota del primer parcial: ");
   scanf("%f", parcial1);
   printf("Nota del segundo parcial: ");
   scanf("%f", parcial2);
   printf("Nota del tercer parcial: ");
   scanf("%f", parcial3);
     float TotalParciales = parcial + parcial2 + parcial3;
     float PromedioParciales = TotalParciales / 3;

     float ExamenFinal;
     printf("Nota del examen final: ");
     scanf("%f", &ExamenFinal);

     float TrabajoFinal;
      printf("Nota del trabajo final: ");
      scanf("%f", &TrabajoFinal);
}

