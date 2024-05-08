#include <stdio.h>
#include <stdlib.h>

int main () {
    int opcion;
    printf("Elija una opcion\n 1) Hallar tres números consecutivos cuya suma sea 87.\n 2) Calcular la media (promedio) de 3 números\n 3) Determinar si un valor numérico positivo, mayor que cero ingresado es par o impar.\n 4) Dado como entrada las notas de 4 pruebas de un alumno  y la nota de tarea, se pide determinar si el alumno aprobó o no  la materia (se aprueba con 6).\n 5) Dada una nota escriba Aprobado o Reprobado segun la nota ingresada, pero además si la nota de aprobación es mayor o igual a 8, escriba .felicitaciones. y si la nota es 1, escriba Debes esforzarte más. \n 6) Dado un alquiler, se pide determinar  cuánto paga en impuesto por concepto de alquiler, considerando la siguiente escala de cobro:  sueldo <= 202 0%% impuesto,  202 < sueldo <= 607 5%%,  607 < sueldo <= 1.013 10%%, 1.013 < sueldo <= 1.418 →15%%, 1.418 < sueldo 25%%\n 7) Dada como entrada una hora en formato hh:mm, [24], genere como salida la misma hora pero en formato hh:mm [am/pm]\n 8) Suponga que un individuo desea invertir su capital en un banco y desea saber ¿Cuánto dinero ahorra después de un mes, si el banco paga a razón de 2%% mensual?\n 9) Una persona tiene 50 años, y su hijo 20.  ¿Dentro de cuántos años la edad del padre será el doble que la de su hijo?\n 10) Convierta a horas minutos y segundos un tiempo expresado en segundos \n 11) Un alumno desea saber cuál será su calificación final, dicha calificación se compone de los siguientes porcentajes: 55%% del promedio final de sus calificaciones (de sus  3 evaluaciones parciales) 30%% de la calificación de promedio 15%% de la calificación de un trabajo final\n 12) Un vendedor recibe un sueldo base más un 10 %% extra por comisión de sus ventas, el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por las tres ventas que realiza en el mes, y el total que recibirá en el mes\n 13) Una tienda ofrece un descuento del 15%% sobre el total de la compra, y un cliente desea saber cuánto deberá pagar finalmente por su compra.\n 14) Generar el valor absoluto de un número dado como entrada. Valor absoluto o módulo1 de un número real es su valor numérico sin tener en cuenta su signo, sea este positivo (+) o negativo (-). Así, por ejemplo, 3 es el valor absoluto de +3 y de -3. El valor absoluto está relacionado con las nociones de magnitud, distancia y norma en diferentes contextos matemáticos y físicos.\n 15) Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.\n 16) Dada una cantidad en pesos argentinos, obtener la equivalencia en dólares estadounidenses, asumiendo que la unidad cambiaría es un dato desconocido.\n 17) Calcular la FCM para cualquier persona, sabiendo que ésta es la fórmula de la Frecuencia cardíaca máxima por géneros: Para hombres FCmax = ((210 menos (0,5 * edad en años)) menos 1%% del peso) + 4 Para mujeres FCmax = (210 menos (0,5 * edad en años)) - 1%% del peso\n");
    scanf("%d", &opcion);
    //ejercicio 1
    if (opcion == 1) {
        printf("Elegiste la opcion 1\n");
            int i;
            for (i == 0; i < 500; i++ ) {
                int n = i;
                if ((n*3)+3 == 87) {
                    printf("%d+%d+%d= 87", n,n+1, n+2);
                    break;

                }
            }
            //ejercicio 2
    } else if (opcion == 2) {
        float primerNumero;
        float segundoNumero;
        float tercerNumero;
        float Calculo;
            printf("Ponga el primer numero: \n");
            scanf("%f", &primerNumero);
            printf("Ponga el segundo numero: \n");
            scanf("%f", &segundoNumero);
            printf("Ponga el tercer numero: \n");
            scanf("%f", &tercerNumero);
             Calculo = (primerNumero + segundoNumero + tercerNumero) / 3;
                printf("El promedio de los 3 numeros es %f\n", Calculo);

        //ejercicio 3
    } else if (opcion == 3) {
        int numero;
        printf("Ingrese un numero positivo: ");
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Error, el numero es menor a 0");
        } else if (numero > 0) {
            if (numero % 2 == 0) {
                printf("El numero es par");
            } else {
                printf("El numero es impar");
            }
        }
            //ejercicio 4
    } else if (opcion == 4) {
        float prueba1;
        float prueba2;
        float prueba3;
        float prueba4;
        float tareaFinal;
        float notaFinal;
         printf("Ponga la nota de la primera prueba: ");
          scanf("%f", &prueba1);
        printf("Ponga la nota de la segunda prueba: ");
          scanf("%f", &prueba2);
        printf("Ponga la nota de la tercera prueba: ");
          scanf("%f", &prueba3);
        printf("Ponga la nota de la cuarta prueba: ");
          scanf("%f", &prueba4);
        printf("Ponga la nota de la tarea final: ");
          scanf("%f", &tareaFinal);
            notaFinal = (prueba1 + prueba2 + prueba3 + prueba4 + tareaFinal) / 5;
            if (notaFinal >= 6) {
                printf("La materia esta aprobada con un %f", notaFinal);
            } else {
                printf("La materia esta desaprobada con un %f", notaFinal);
            }

        //ejercicio 5
    } else if (opcion == 5 ) {
        float nota;
        printf("Ponga la nota: ");
        scanf("%f", &nota);
        if (nota == 6 || nota == 7) {
            printf("Aprobado");
        } else if (nota >= 8) {
            printf("Aprobado, Felicidades!");
        } else if (nota < 6 && nota >= 2) {
            printf("Desaprobado");
        } else if (nota == 1 ) {
            printf("Desaprobado, Debes esforazarte mas");
        }
        //ejercicio 6
    } else if (opcion == 6) {
        int sueldo;
        int impuesto;
        printf("Ponga el sueldo: ");
        scanf("%d", &sueldo);
        if (sueldo <= 202) {
            impuesto = 0;
        } else if (sueldo > 202 && sueldo <= 607) {
            impuesto = 5;
        } else if (sueldo > 607 && sueldo <= 1013) {
            impuesto = 10;
        } else if (sueldo > 1013 && sueldo <= 1418) {
            impuesto = 15;
        } else if (sueldo > 1418) {
            impuesto = 25;
        }
            printf("Usted debe pagar %d%% de impuestos", impuesto);
        //ejercicio 7
    } else if (opcion == 7) {
        int hh, mm;
    char meridiano[3];
        printf("Ingrese la hora en formato hh:mm (24 horas): ");
    scanf("%d:%d", &hh, &mm);

    if (hh >= 0 && hh < 12) {
        sprintf(meridiano, "am");
        if (hh == 0) {
            hh = 12;
        }
    } else {
        sprintf(meridiano, "pm");
        if (hh > 12) {
            hh -= 12;
        }
        }
    printf("Hora en formato 12 horas: %02d:%02d %s\n", hh, mm, meridiano);
    } 
     //ejercicio 8
    else if (opcion == 8) {
        float capital;
        float total;
        printf("Ingrese su capital: ");
        scanf("%f", &capital);
        total = (capital * 0.02) + capital;
        printf("Al cabo de un mes tendria: %f", total);
    } 
     //ejercicio 9
    else if (opcion == 9) {
         int edad_padre = 50;
            int edad_hijo = 20;
            int años_pasados = 0;
            while (edad_padre != 2 * edad_hijo) {
                edad_padre++;
                edad_hijo++;
                años_pasados++;
            }
            printf("La edad del padre sera el doble que la del hijo en %d años.\n", años_pasados);

    } 
    //ejercicio 10
    else if (opcion == 10 ) {
      int segundos, horas, minutos, restante;

    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    restante = segundos % 3600;
    minutos = restante / 60;
    restante %= 60;

    printf("Tiempo: %d horas, %d minutos, %d segundos\n", horas, minutos, restante);

    //ejercicio 11
    } else if (opcion == 11) {
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
    
    //ejercicio 12
    else if (opcion == 12) {
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
    //ejercio 13
    else if (opcion == 13) {
        float precio;
        float precionConDescuento;
        printf("Ingrese el valor: ");
        scanf("%f", &precio);
     precionConDescuento = precio - (precio * 0.15);
     printf("El precio sin descuento es de %f, con descuento es de %f", precio, precionConDescuento);

    } 
    //ejercicio 14
    else if (opcion == 14) {
         int numero;
        int valorAbsoluto;
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        valorAbsoluto = abs(numero);
        printf("el valor absoluto de %d es %d", numero, valorAbsoluto);
} 
 //ejercicio 15
else if (opcion == 15) {
    float cantAlumnos;
    float cantMujeres;
    float cantHombres;
    float porcentajeHombres;
    float porcentajeMujeres;
    printf("Ingrese la cantidad total de mujeres: ");
     scanf("%f", &cantMujeres);
    printf("Ingrese la cantidad total de Hombres: ");
     scanf("%f", &cantHombres);
    cantAlumnos = cantMujeres + cantHombres;
     porcentajeHombres = (cantHombres / cantAlumnos) * 100;
     porcentajeMujeres = (cantMujeres / cantAlumnos) * 100;

     printf("En el curso hay un total de %f alumnos, %f son mujeres (%f%%), y %f son hombres (%f%%)", cantAlumnos, cantMujeres, porcentajeMujeres, cantHombres, porcentajeHombres);

    //ejercicio 16
} else if ( opcion == 16) {
    float pesosArgentinos;
    float valorDolar;
    float equivalencia;
    printf("Ingrese la cantidad de pesos argentinos: ");
    scanf("%f", &pesosArgentinos);
    printf("Ingrese el valor del dolar: ");
    scanf("%f", &valorDolar);
    equivalencia = pesosArgentinos / valorDolar;
    printf("%f$, teniendo en cuenta que el dolar vale %f$, son: %fUSD", pesosArgentinos, valorDolar, equivalencia);
    //ejercicio 17
} else if (opcion == 17) {
    int genero;
    printf("Usted es: \n 1)Hombre\n 2)Mujer\n");
    scanf("%d", &genero);
    if (genero == 1) {
        float edad;
        float peso;
        float Frecuencia;
        printf("Ingrese su peso: ");
        scanf("%f", &peso);
        printf("Ingrese su edad: ");
        scanf("%f", &edad);
         Frecuencia = ((210 - (0.5 * edad)) - (peso * 0.01)) + 4;
         printf("Su frecuencia cardiaca maxima es de %f", Frecuencia);
    } else if (genero == 2) {
        float edad;
        float peso;
        float Frecuencia;
        printf("Ingrese su peso: ");
        scanf("%f", &peso);
        printf("Ingrese su edad: ");
        scanf("%f", &edad);
         Frecuencia = ((210 - (0.5 * edad)) - (peso * 0.01));
         printf("Su frecuencia cardiaca maxima es de %f", Frecuencia);
    }
} else {
    printf("Ingrese una opcion de la 1 a la 17");
}
 
 }
