#include <stdio.h>
#define rows 5   // NUMBER OF ROWS IN THE THEATRE.
#define seats 10 // NUMBER OF SEATS PER ROW.
int main()
{
    char seatingchart[rows][seats];
    int reservedseats, row, seat;
    // INITIALISING THE SEATING CHART WITH 'O' TO INDICATE ALL SEATS ARE AVAILABLE.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < seats; j++)
        {
            seatingchart[i][j] = 'O';
        }
    }
    // ASKING THE USER HOW MANY SEATS TO RESERVE
    printf("ENTER THE NUMBER OF RESERVED SEATS:");
    scanf("%d", &reservedseats);
    // FOR EACH RESERVED SEAT, ASK FOR THE ROW AND SEAT NUMBER AND MARK IT AS RESERVED.
    for (int i = 0; i < reservedseats; i++)
    {
        printf("ENTER ROW AND SEAT NUMBER FOR RESERVED SEAT %d(e.g.,1 5):", i + 1);
        scanf("%d %d", &row, &seat);
        // MARK THE SEAT AS RESERVED (USING'X')
        seatingchart[row - 1][seat - 1] = 'X';
    }
    // DISPALY THE SEATING CHART
    printf("\nSEATING CHART:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("ROW %d:", i + 1);
        for (int j = 0; j < seats; j++)
        {
            printf("%c", seatingchart[i][j]);
        }
        printf("\n");
    }
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}