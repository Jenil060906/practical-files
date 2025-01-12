// This program is prepared by 24CE141_Jenil Viradia.
#include <stdio.h>
int main()
{
    int principalamount, timeperiod;
    float interestrate, simpleinterest;

    printf("Enter the Principal Amount of your savings account:");
    scanf("\n%d", &principalamount);

    printf("\nEnter the Time Period in years:");
    scanf("\n%d", &timeperiod);

    printf("\nEnter the Rate of Interest for your savings account:");
    scanf("\n%f", &interestrate);

    simpleinterest = (principalamount * timeperiod * interestrate) / 100;
    printf("\nSimple Interest on yours savings account is %f", simpleinterest);
    printf("\nThis code is prepared by 24CE141_Jenil Viradia.");
    return 0;
}