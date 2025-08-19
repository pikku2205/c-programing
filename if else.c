#include <stdio.h>
int main() {
int n,x;
printf("enter the number:");
scanf("%d",& n);
if(n%2==0)

{
    x=n*n;
    printf("%d",x);
}

else
{
    x=n*n*n;
    printf("%d",x);
}
}
