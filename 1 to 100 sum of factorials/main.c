#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned long long int product=1;
unsigned long long int sum=0;
int a;
 printf("Pls enter a number:");
 scanf("%d",&a);
int i;
 for (i=1;i<=a;i++)
 {
    product=product*i;
    sum=sum+product;
 }

 printf("The sum of factorials is:%d",sum);
    return 0;
}

