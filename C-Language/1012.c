#include<stdio.h>
int main()
{
    double A, B, C, pi = 3.14159;
    double triangle, circle, trapezium, square, rectangle;
    scanf("%lf%lf%lf", &A,&B,&C);
    triangle = (A * C) / 2;
    circle = (pi * C * C);
    trapezium = ((A + B) * C) / 2;
    square = (B * B);
    rectangle = (A * B);
    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);
    return 0;
}
