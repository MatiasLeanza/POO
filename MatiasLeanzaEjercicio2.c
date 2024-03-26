/* Un vendedor recibe un sueldo base más un 10% 
extra por comisión de sus ventas, el vendedor desea saber 
cuánto dinero obtendrá por concepto de comisiones por las tres 
ventas que realiza en el mes y el total que recibirá en el mes 
tomando en cuenta su sueldo base y comisiones
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
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



}
