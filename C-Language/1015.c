#include<stdio.h>

int main()
{
    double x1, y1, x2, y2, p1, p2, distance;
    scanf("%lf %lf %lf %lf", &x1,&x2,&y1,&y2);
    p1 = (x1 - y1);
    p2 = (x2 - y2);
    distance = sqrt((p1 * p1) + (p2 * p2));
    printf("%.4lf\n",distance);
    return 0;
}
