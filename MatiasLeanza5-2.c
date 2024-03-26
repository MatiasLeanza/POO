#include <stdio.h>
#include <stdlib.h>

int main () {
    int opcion;
        printf("Elija una opcion de programa\n 1) Positivo/Negativo, Ponga 1\n 2) Par/Impar, Ponga 2\n 3) Multiplo de 2/3, Ponga 3\n 4) Maximo de 3 valores, Ponga 4\n");
            scanf("%d", &opcion);
    int eleccion;
        if (opcion == 1) {
            printf("Elegiste Positivo/Negativo, ");
            eleccion = 1;
        } else if (opcion == 2) {
            printf("Elegiste Par/Impar, ");
            eleccion = 2;
        } else if (opcion == 3) {
            printf("Elegiste Multiplo de 2/3, ");
            eleccion = 3;
        } else if (opcion == 4) {
            printf("Elegiste Maximo de 3 valores, ");
            eleccion = 4;
        }
    
            if (eleccion == 1) {
                int numeroPositivoNegativo;
                    printf("Ponga un Numero ");
                        scanf("%d", &numeroPositivoNegativo);
                            if (numeroPositivoNegativo > 0) {
                            printf("%d es positivo ", numeroPositivoNegativo);
                        } else if (numeroPositivoNegativo < 0) {
                            printf("%d es negativo ", numeroPositivoNegativo);
                        } else if (numeroPositivoNegativo == 0) {
                            printf("0 no es un valor valido ");
                    }
            } else if (eleccion == 2) {
                int parImpar;
                    printf("Ponga un numero ");
                        scanf("%d", &parImpar);
                            if (parImpar % 2 == 0) {
                                printf("%d Es par", parImpar);
                            } else if (parImpar % 2 != 0) {
                                printf("%d Es impar", parImpar);
                            }
            } else if (eleccion == 3) {
                int multiploDosTres;
                    printf("Ponga un numero ");
                        scanf("%d", &multiploDosTres);
                            if (multiploDosTres % 2 == 0 && multiploDosTres % 3 == 0) {
                                printf("%d Es multiplo de 2 y de 3", multiploDosTres);
                            } else if (multiploDosTres % 2 == 0) {
                                printf("%d Es multiplo de 2, pero no de 3", multiploDosTres);
                            } else if (multiploDosTres % 3 == 0) {
                                printf("%d Es multiplo de 3, pero no de 2", multiploDosTres);
                            }
            } else if (eleccion == 4) {
                int A;
                int B;
                int C;
                    printf("Ponga el primer numero ");
                        scanf("%d", &A);
                    printf("Ponga el segundo numero ");
                        scanf("%d", &B);
                    printf("Ponga el tercer numero ");
                        scanf("%d", &C);
                            if (A > B && A > C) {
                                printf("El maximo entre %d, %d y %d es %d", A,B,C,A);
                            } else if (B > A && B > C) {
                                printf("El maximo entre %d, %d y %d es %d", A,B,C,B);
                            } else if (C > A && C > B) {
                                printf("El maximo entre %d, %d y %d es %d", A,B,C,C);
                            } else if (A == B && B == C) {
                                printf("Los numeros %d, %d y %d son iguales", A,B,C);
                            }

            }
};