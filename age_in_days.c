#include <stdio.h>

int main()
{
    // variable declaration
    int days, year, month;
    // take input
    scanf("%d", &days);
    // calculate age in days
    year = days / 365; // 365 days = 1 year
    days %= 365;       // remain days after extracting year
    month = days / 30; // 30 days = 1 month
    days %= 30;        // remain days after extracting moth
    // print the result
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);
}
