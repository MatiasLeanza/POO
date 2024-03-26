/* El director de una escuela está organizando un viaje de estudios, y requiere determinar cuánto 
debe cobrar a cada alumno
 y cuánto debe pagar a la compañía de viajes por el servicio. La forma de cobrar es la siguiente: 
Si son 100 alumnos o más, el costo por cada alumno es de $ 500, de 50 a 99 alumnos, 
el costo es de $ 400  y  de 30 a 49, de $ 300. 
Pero si son menos de 30, el costo del alquiler del micro es de $ 6000.- 
sin importar el número de alumnos. 
Realice un algoritmo que permita determinar 
el pago por el alquiler del micro y lo que debe pagar cada alumno por el viaje.
 */


 #include <stdio.h>
 #include <stdlib.h>

int main () {
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
}



