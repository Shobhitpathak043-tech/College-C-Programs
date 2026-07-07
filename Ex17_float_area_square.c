#include <stdio.h>
int main()
{
    float length,area;
    printf("Enter the length: ");
    scanf("%f", &length);

    area = length*length;
    printf("Area of Square = %.2f", area);

    return 0;
}
