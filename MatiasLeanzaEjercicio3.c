/* Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. dicha calificación se compone de los siguientes porcentajes: 55% del promedio de sus tres calificaciones parciales. 30% de la calificación del examen final. 15% de la calificación de un trabajo final. */

#include <stdio.h> 
#include <stdlib.h>

int main () { 
  float parcial1; 
  float parcial2; 
  float parcial3; 
  float PromedioParciales;
  float TotalParciales;
  float Notafinal; 
  float TrabajoFinal;
  float ExamenFinal;
   printf("Nota del primer parcial: "); 
    scanf("%f", &parcial1); 
  printf("Nota del segundo parcial: "); 
    scanf("%f", &parcial2); 
  printf("Nota del tercer parcial: "); 
    scanf("%f", &parcial3); 
    
  printf("Nota del examen final: ");
 scanf("%f", &ExamenFinal);

 
 
  printf("Nota del trabajo final: ");
  scanf("%f", &TrabajoFinal);
  
  TotalParciales = parcial1 + parcial2 + parcial3;
  
  PromedioParciales = TotalParciales / 3;
  
  Notafinal= (PromedioParciales * 0.55) + (ExamenFinal * 0.3) + (TrabajoFinal * 0.15);
  
 
  if (Notafinal < 6 ) {
    printf("el promedio de los parciales es: %f, la nota del examen final es: %f, la nota del trabajo final es: %f\n La nota final es: %f\n DESAPROBADO", PromedioParciales, ExamenFinal, TrabajoFinal, Notafinal);
  } else if (Notafinal >= 6) {
    printf("el promedio de los parciales es: %f, la nota del examen final es: %f, la nota del trabajo final es: %f\n La nota final es: %f\n APROBADO", PromedioParciales, ExamenFinal, TrabajoFinal, Notafinal);
  }
  
 

}

