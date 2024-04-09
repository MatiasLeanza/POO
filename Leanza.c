#include <stdio.h>

int main () {
 int i;
 printf("Ponga un numero: ");
 scanf("%d", &i);
 printf("%d\t", i);
while (i != 1) {
    
    if (i % 2 == 0) {
        i = i / 2;
    } else  {
        i = (i * 3) + 1;
    }
    
    printf("%d\t", i);
 }
}