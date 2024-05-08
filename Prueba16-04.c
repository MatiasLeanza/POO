#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int opcion;
    printf("Elija una opcion\n 1) Asociacion de vinicultores...\n2) 2 numeros base y potencia...\n 3) valor radio\n 4) jubilacion\n 5)  subsicidos\n");
    scanf("%d", &opcion);

     switch(opcion) {
        case 1:
            printf("Eligio la opcion 1\n");
            int tipo;
            int tamano;
            int precio;
            //Asignacion de valroes
             printf("Elija el tipo: 1)A\n 2)B: ");
                scanf("%d", &tipo);
             printf("Elija el tamaño: 1)1\n 2)2: ");
                scanf("%d", &tamano);
              //Condicional para la asignacion de los precios
              if (tipo == 1) {
                if (tamano == 1) {
                    precio = precio + 200;
                    printf("EL PRECIO ES DE %d", precio);
                } else if (tamano == 2) {
                    precio = precio + 300;
                    printf("EL PRECIO ES DE %d", precio);
                }
              } else if (tipo == 2) {
                if (tamano == 1) {
                    precio = precio + 300;
                    printf("EL PRECIO ES DE %d", precio);
                } else if (tamano == 2) {
                    precio = precio + 500;
                    printf("EL PRECIO ES DE %d", precio);
                }
              } else {
                printf("Elija una opcion valida");
              }
              
              

                
            

         break;
        
        case 2:
         printf("Eligio la opcion 2\n");
         int base;
         int exponente;
         int resultado = 1;
         int n;
          printf("Ponga la base: ");
          scanf("%d", &base);
          printf("Ponga el exponente: ");
          scanf("%d", &exponente);
            //if para que los numeros sean enteros positivos
            if ((base > 0 && base == (int) base) && (exponente > 0 && exponente == (int) exponente)) {
                 //loop para la potencia
                 for (n = 1;n <= exponente; n++) {
                    resultado *= base;
                    printf("%d\t", resultado);
                }
            } else {
                printf("Ponga valores validos");
            }
            
           


        break;

        case 3:
            printf("Eligio la opcion 3\n");
            float radio;
            float longitud;
            float area;
            float volumen;
            //Asignacion a la variable
            printf("Ponga el valor del radio: ");
            scanf("%f", &radio);
             //Formulas
             longitud = 2 * 3.1415 * radio;
             area = 3.1415 * (radio * radio);
             volumen = (4/3) * 3.1415 * (radio * radio * radio);
             printf("longitud: %f\n area: %f\n volumen: %f", longitud, area, volumen);


        break;

        case 4:
            printf("Eligio la opcion 4\n");
            int sexo;
            int edad;
            int aporte;
            //Asignando valores a la variables
             printf("Elija su genero\n 1) Hombre\n 2) Mujer\n");
             scanf("%d", &sexo);
             printf("Ponga su edad: ");
             scanf("%d", &edad);
             printf("Ponga sus años de aporte: ");
             scanf("%d", &aporte);
            //comprobaciones de edad y aporte para la  validacion de la jubliacion
             if (sexo == 1) {
                if (edad >= 65 && aporte >= 20) {
                    printf("Usted es apto para jubilarse");
                } else {
                    printf("Usted no es apto para jubilarse");
                }
             } else if (sexo == 2) {
                if (edad >= 60 && aporte >= 20) {
                    printf("Usted es apto para jubilarse");
                } else {
                    printf("Usted no es apto para jubilarse");
                }
             } else {
                printf("Elija una opcion valida");
             }
        break;

        case 5:
            int subsidio;
            int hijos;
            int i;
            int hijosEscolar;
            int hijoEscolarSubsidio;
            int total;
            
            printf("¿Cuantos hijos tiene?: ");
            scanf("%d", &hijos);
            //Loop para sumarle el valor al subsidio dependiendo de la cantidad de hijos
             for (i = 1; i <= hijos ; i++) {
                if (hijos <= 2) {
                    subsidio += 700;
                } else if (hijos >= 3 && hijos <= 5) {
                    subsidio += 800;
                } else if (hijos > 5) {
                    subsidio += 1200;
                }
             }
                printf("cuantos de sus hijos estan en edad escolar: ");
                scanf("%d", &hijosEscolar);
                    //condicion que pregunta si la variable hijos escolar es mayor a 0 y si es un numero entero para sumarle al total, en caso de que haya hijos con edad apta para el cole
                    if (hijosEscolar > 0 && hijosEscolar == (int) hijosEscolar) {
                        hijoEscolarSubsidio = hijosEscolar * 1000;
                    total = subsidio + hijoEscolarSubsidio;
                    printf("El valor total de los subsidios es :%d\n %d son de el total de los hijos y %d son de los hijos en el cole", total, subsidio, hijoEscolarSubsidio);
                    } else {
                        printf("Ponga un valor valido");
                    }
                    
                    

             
            

        break;

        default:
         printf("Elija una opcion valida");
         break;
     }



}
