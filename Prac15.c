#include <stdio.h>
int main()
{
    // ARRAY TO STORE 25 NUMBERS.
    int numbers[25];
    int positivecount = 0, negativecount = 0;
    int evencount = 0, oddcount = 0;
    // INPUT 25 NUMBERS FROM THE USER
    printf("ENTER 25 NUMBERS:\n");
    for (int i = 0; i < 25; i++)
    {
        printf("NUMBER %d:", i + 1);
        scanf("%d", &numbers[i]);
        // CHECK IF THE NUMBER IS POSITIVE OR NEGATIVE.
        if (numbers[i] > 0)
        {
            positivecount++;
        }
        else if (numbers[i] < 0)
        {
            negativecount++;
        }
        // CHECK IF THE NUMBER IS EVEN OR ODD.
        if (numbers[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    // DISPLAYING THE RESULT.
    printf("\nRESULTS:\n");
    printf("POSITIVE NUMBERS:%d\n", positivecount);
    printf("NEGATIVE NUMBERS:%d\n", negativecount);
    printf("EVEN NUMBERS:%d\n", evencount);
    printf("ODD NUMBERS:%d\n", oddcount);
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}