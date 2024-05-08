#include <stdio.h>

int main() {
    int opcionn;
    printf("Elija una opcion\n 1)Credito WPP\n 2) Apto/No Apto prueba\n 3)Sueldo Trabajador\n");
    scanf("%d", &opcionn);

    if (opcionn == 1) {
        int opcion;
        printf("¿Tiene usted credito?\n 1)Si\n 2)No\n");
        scanf("%d", &opcion);
        if (opcion == 1) {
            printf("Podes hacer la operacion");
        } else if (opcion == 2) {
            printf("No podes hacer la transaccion");
        } else {
            printf("Elija una opcion valida");
        }
} else if (opcionn == 2) {
    float primerNota;
    float segundaNota;
    
    printf("Ingrese la primera nota: ");
    scanf("%f", &primerNota);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &segundaNota);
    
    if ((primerNota >= 7 && primerNota <= 10) && (segundaNota >= 8 && segundaNota <= 10)) {
        printf("Apto");
    } else if ((primerNota < 7 && primerNota >= 1) || (segundaNota < 8 && segundaNota >= 1)) {
        printf("No apto");
    } else if ((primerNota > 10 || segundaNota > 10) || (primerNota < 0 || segundaNota || 0)) {
        printf("Pone una nota del 1 - 10");
    }

} else if (opcionn == 3) {
    float sueldo;
    printf("Ingresa tu sueldo: ");
    scanf("%f", &sueldo);

    if (sueldo < 8000) {
        sueldo = sueldo * 1.15;
        printf("Tu nuevo sueldo es de: %f", sueldo);
    } else {
        sueldo = sueldo * 1.12;
        printf("Tu nuevo sueldo es de: %f ", sueldo);
    }
}
    }
