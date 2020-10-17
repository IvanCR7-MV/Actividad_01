#include <stdio.h>

int main(){
    int a;
    float c;
    char simbolo;

    printf("Introduzca un entero: ");
    scanf("%d",&a);
    printf("Introducimos un No. con punto decimal: ");
    scanf("%f",&c);
    printf("Presione una tecla:");
    scanf(" %c",&simbolo);

    printf("El valor entero es: %d\n",a);
    printf("El valor decimal es: %.3f\n",c);
    printf("Usted presiono la tecla: %c\n",simbolo);
    getch();
}
