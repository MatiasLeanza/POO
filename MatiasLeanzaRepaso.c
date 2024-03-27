#include <stdio.h>
#include <stdlib.h>


int main () {
 int opcion;
    printf("Elija una opcion\n 1)DIR. ESCUELA\n 2)VENDEDOR\n 3)ALUMNOnotas\n 4)PARES\n 5)PuntoEncuentro\n");
    scanf("%d", &opcion);
     if (opcion == 1) {
        printf("Elegiste la opcion 1\n");
    //arranca el programa 1
        int precioPorAlumno;
 int cantAlumnos;
 int precioTotal;
  printf("Ingrese la cantidad de alumnos ");
   scanf("%d", &cantAlumnos);
    if (cantAlumnos >= 100) {
        precioPorAlumno = 500;
        precioTotal = cantAlumnos * precioPorAlumno;
         printf("El precio por alumno es de 500, osea que si hay %d alumnos el precio es: %d", cantAlumnos, precioTotal);
    } else if (cantAlumnos >= 50 && cantAlumnos <= 99) {
        precioPorAlumno = 400;
        precioTotal = cantAlumnos * precioPorAlumno;
         printf("El precio por alumno es de 400, osea que si hay %d alumnos el precio es: %d", cantAlumnos, precioTotal);
    } else if (cantAlumnos >=30 && cantAlumnos <= 49) {
        precioPorAlumno = 300;
        precioTotal = cantAlumnos * precioPorAlumno;
         printf("El precio por alumno es de 300, osea que si hay %d alumnos el precio es: %d", cantAlumnos, precioTotal);
    } else if (cantAlumnos < 30) {
        precioTotal = 6000;
        printf("La cantidad de alumnos es menor a 30, el precio es de %d fijo", precioTotal);
    }
     
     
     } else if (opcion == 2) {
        printf("Elegiste la opcion 2\n");
    //arranca el programa 2
         int sueldo;
    int precioVenta1;
    int precioVenta2;
    int precioVenta3;
    int TotalVentas;
    int comision1;
    int comision2;
    int comision3;
    int TotalComisiones;
    int total;
     printf("Ingrese el sueldo: ");
     scanf("%d", &sueldo);
     printf("Ingrese el valor de la primera venta: ");
     scanf("%d", &precioVenta1);
     printf("Ingrese el valor de la segunda venta: ");
     scanf("%d", &precioVenta2);
     printf("Ingrese el valor de la tercera venta: ");
     scanf("%d", &precioVenta3);
        comision1 = precioVenta1 * 0.1;
        comision2 = precioVenta2 * 0.1;
        comision3 = precioVenta3 * 0.1;
         TotalComisiones = comision1 + comision2 + comision3;
         TotalVentas = precioVenta1 + precioVenta2 + precioVenta3;
          total = sueldo + TotalVentas + TotalComisiones;
     printf("Su sueldo es de: %d\n El valor de la primera venta es de: %d con una comision de %d\n El valor de la segunda venta es de: %d con una comision de %d\n El valor de la tercera venta es de: %d con una comision de %d\n El valor por las ventas es de %d\n El valor por las comisiones es de %d\n El total es de %d", sueldo, precioVenta1, comision1, precioVenta2, comision2, precioVenta3, comision3, TotalVentas, TotalComisiones, total);

     } else if (opcion == 3) {
        printf("Elegiste la opcion 3\n");

        //arranca el programa 3
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
     } else if (opcion == 4) {
        printf("Elegiste la opcion 4\n");

        //arranca el programa 4

        int a;
    int b;
    int i;
    printf("Ponga el primer numero de desde donde quiere que arranque: ");
    scanf("%d", &a);
    printf("Ponga un numero hasta donde quiere que llegue: ");
    scanf("%D", &b);
   
    for (i = a; i < b; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
     } else if (opcion == 5) {
        printf("Elegiste la opcion 5\n");

        //arranca el programa 5
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


}