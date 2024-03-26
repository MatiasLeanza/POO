#include <stdio.h>
#include <stdlib.h>

int main () {
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
}