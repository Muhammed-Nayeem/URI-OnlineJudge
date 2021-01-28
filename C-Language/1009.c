#include<stdio.h>
int main()
{
    char name;
    double salary,sold,total;
    scanf("%s",&name);
    scanf("%lf%lf",&salary,&sold);
    total = salary + (sold * 0.15) ;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
