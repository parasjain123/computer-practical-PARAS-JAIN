#include <stdio.h>
int main()
{
int i,j,index,n,a[10];
printf("enter a number");
scanf("%d",&n);
for(i=0;n!=0;i++)
{
a[i]=n%10;
n=n/10;
}
i=i-1;
printf("output\n");
for(;i>=0;i--)
{
for(j=i;j>=0;j--)
printf("%d\t",a[j]);
printf("\n");
}
return 0;
}

