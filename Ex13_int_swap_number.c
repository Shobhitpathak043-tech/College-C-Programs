#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    
    printf("\nBefore swapping:\n");
    printf("a = %d\nb = %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d",a,b);

    return 0;
}
