#include<stdio.h>
int main()
{
int u1,u2,n1,n2;
float p1,p2,t;
scanf("%d %d %f",&n1,&u1,&p1);
scanf("%d %d %f",&n1,&u2,&p2);
t=(u1*p1)+(u2*p2);
printf("VALOR A PAGAR: R$ %0.2f\n",t);
return 0;
}

