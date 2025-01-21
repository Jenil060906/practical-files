#include <stdio.h>
#define ms 5
#define mnl 50
int main()
{
    char names[ms][mnl]; // ms IS MAXIMUM STUDENTS AND mnl IS MAXIMUM NAME LENGTH.
    // COLLECT NAMES
    printf("ENTER THE NAMES OF %d STUDENTS:\n", ms);
    for (int i = 0; i < ms; i++)
    {
        printf("STUDENT %d:", i + 1);
        fgets(names[i], mnl, stdin);
        // REMOVE NEWLINE.
        for (int j = 0; names[i][j] != '\0'; j++)
        {
            if (names[i][j] == '\n')
            {
                names[i][j] = '\0';
                break;
            }
        }
    }
    // SORTING PROCESS.
    for (int i = 0; i < ms - 1; i++)
    {
        for (int j = i + 1; j < ms; j++)
        {
            // STRING COMPARISON.
            int k = 0;
            while (names[i][k] != '\0' && names[i][j] != '\0' && names[i][k] == names[j][k])
            {
                k++;
            }
            if (names[i][k] > names[j][k])
            {
                // SWAP THE NAMES.
                char temp[mnl];
                for (int m = 0; m < mnl; m++)
                {
                    temp[m] = names[i][m];
                    names[i][m] = names[j][m];
                    names[j][m] = temp[m];
                }
            }
        }
    }
    // DISPLAY THE SORTED NAMES.
    printf("\n====================\n");
    printf("\nSORTED NAMES IN ALPHABETICAL ORDER:\n");
    for (int i = 0; i < ms; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\n");
    printf("\n_\n");
    printf("THIS PROGRAM IS MADE BY 24CE141_JENIL VIRADIA.");
    return 0;
}