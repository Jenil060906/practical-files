// This program is created by 24CE141_Jenil Viradia.
// Calculating total wealth of Raman and Suman and displaying who has greater wealth.
#include <stdio.h>
void main()
{
    // Taking rb,rc,rp as Raman's bungalow, car and property wealth.
    int rb, rc, rp;
    rb = 12000000;
    rc = 3000000;
    rp = 6000000;
    // Calculating total wealth of Raman by adding all the above amenities wealth.
    int tr = rb + rc + rp;
    printf("Raman's total wealth is: %d\n", tr);
    // Taking sa,sh,sc as Suman's apartment, house and car wealth.
    int sa, sh, sc;
    sa = 11000000;
    sh = 8000000;
    sc = 8000000;
    // Calculating total wealth of Suman by adding all the above amenities wealth.
    int ts = sa + sh + sc;
    printf("Suman's total wealth is: %d\n", ts);
    // Using if,else-if and else operators to determine whose wealth is greater.
    if (tr > ts)
    {
        printf("Raman's total wealth is greater than Suman's total wealth.");
    }
    else if (ts > tr)
    {
        printf("Suman's total wealth is greater than Raman's total wealth.");
    }
    else
    {
        printf("Both Raman and Suman have equal amount of wealth.");
    }
    printf("\nThis program is created by 24CE141_Jenil Viradia.");
}