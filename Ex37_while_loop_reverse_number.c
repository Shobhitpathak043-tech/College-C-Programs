#include <stdio.h>
 int main() 
{
    int num, rem, rev;
    printf("enter the number");
    scanf("%d",&num);
    rev=0;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
     printf ("reverse=%d",rev);

    return 0;
}
