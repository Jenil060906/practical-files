#include <stdio.h>
int main()
{
    int totalbudget = 0, i = 2;
    //USING WHILE LOOP TO INCREASE THE TOTALBUDGET.
    while (i < 102)
    {
        totalbudget += 200;
        i += 2;
    }
    printf("TOTAL BUDGET IS:%d", totalbudget);
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}