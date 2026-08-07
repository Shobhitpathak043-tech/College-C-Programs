#include <stdio.h>
 int main()
{
    int i;
    printf("Ascending Order:\n");
    for(i = 1; i <= 10; i++) 
    {
        printf("%d ", i);
    }

    printf("\nDescending Order:\n");
    for(i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}
