#include <stdio.h>
int main()
{
    float length, volume;
    
    printf("Enter length: ");
    scanf("%f", &length);

    volume = length * length * length;
    printf("Volume of Cube = %.2f", volume);

    return 0;
}
