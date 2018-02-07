#include<stdio.h>
int main()
{
int a,b,c=0;
printf("\n enter the values :");
scanf("%d%d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("even\n");
}
else
{
printf("odd\n");
}
return 0;
}
