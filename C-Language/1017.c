#include<stdio.h>

int main()
{
    double H,S,L;

    scanf("%lf %lf",&H,&S);

    L=(H*S/12);

    printf("%.3lf\n",L);

    return 0;
}
