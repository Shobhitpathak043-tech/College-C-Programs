#include <stdio.h>
 int main()
{
    int month_no;
    printf("Enter month number (1-12): ");
    scanf("%d", &month_no);

    if (month_no == 1)
    {
        printf("January");
    }
    else if (month_no == 2)
    {
        printf("February");
    }
    else if (month_no == 3)
    {
        printf("March");
    }
    else if (month_no == 4)
    {
        printf("April");
    }
    else if (month_no == 5)
    {
        printf("May");
    }
    else if (month_no == 6)
    {
        printf("June");
    }
    else if (month_no == 7)
    {
        printf("July");
    }
    else if (month_no == 8)
    {
        printf("August");
    }
    else if (month_no == 9)
    {
        printf("September");
    }
    else if (month_no == 10)
    {
        printf("October");
    }
    else if (month_no == 11)
    {
        printf("November");
    }
    else if (month_no == 12)
    {
        printf("December");
    }
    else
    {
        printf("Invalid month number!");
    }

    return 0;
}
