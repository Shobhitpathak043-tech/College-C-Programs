#include <stdio.h>
int main()
{
    float length, width, height, volume;

    printf("Enter length, width, height: ");
    scanf("%f%f%f", &length, &width, & height);

    volume = length * width * height;
    printf("Volume of Cuboid = %.2f", volume);

    return 0;
}
