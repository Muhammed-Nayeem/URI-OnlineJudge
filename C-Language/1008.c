#include<stdio.h>
int main()
{
    int N;
    double H,A,Tot_Sal;
    scanf("%d",&N);
    scanf("%lf%lf",&H,&A);
    Tot_Sal = (H*A);
    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2lf\n",Tot_Sal);
    return 0;

}
