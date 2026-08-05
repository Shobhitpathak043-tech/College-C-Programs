#include <stdio.h>
 int main() 
{
    int num, rem, rev , no;
    printf("Enter a number: ");
    scanf("%d", &num);
    no = num;
    rev=0;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
        
    }

    printf("reverse = %d\n", rev);
    if (rev == no)
    {
        printf("The number is palindrome");
    }
    else 
    {
        printf("The number is not palindrome");
    }

    return 0;
}
