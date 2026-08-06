#include <stdio.h>
 int main() 
{
    int i;
    for (i = 20; i <= 20; i--) 
    {
        if (i == 7) 
        {
            continue; 
        }
        if (i == -16) 
        {
            break; 
        }
        
        printf("%d\n", i); 
    }

    return 0;
}
