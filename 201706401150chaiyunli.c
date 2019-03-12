#include<stdio.h>
main()
{int x,j;int a[5]={5,10,15,20,25};
for (j=0;j<5;j++)
x=a[j];
scanf("enter you find the number",&x);
if (x<5)
printf("5");
if (x>25)
printf("25");
if (x==a[j])
printf("%d/n",x);
else if (x!=a[j])
j--;
while (x==a[j])
{
do
{
printf("%d%d/n",x,j);
}
while (x==a[j]);
}
}
