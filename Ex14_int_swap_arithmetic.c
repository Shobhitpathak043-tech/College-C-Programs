#include <stdio.h>
int main()
{
    int a ,b ;
    
    printf("Enter the number: ");
    scanf("%d%d",&a,&b);
    
    printf("\nBefore swapping:\n");
    printf("a = %d\nb = %d", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d", a,b);

    return 0;
}
