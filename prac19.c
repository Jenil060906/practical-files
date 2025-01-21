// THIS PROGRAM IS  PREPARED BY 24CE141_JENIL VIRADIA
#include <stdio.h>

int main()
{
    char notes[10][100];
    int note_count = 0;
    char temp[100];
    int option, i, j, k, length;

    while (1)
    {
        printf("Note-Taking Application\n");
        printf("1. Add a Note\n");
        printf("2. Display Notes\n");
        printf("3. Calculate Length of a Note\n");
        printf("4. Reverse a Note\n");
        printf("5. Compare Two Notes\n");
        printf("6. Copy a Note\n");
        printf("7. Concatenate Two Notes\n");
        printf("8. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);
        getchar(); // Consume newline character after scanf

        switch (option)
        {
        case 1: // Add a Note
            if (note_count < 10)
            {
                printf("Enter note: ");
                for (i = 0; (temp[i] = getchar()) != '\n' && i < 99; i++)

                    temp[i] = '\0'; // Null-terminate the string

                for (j = 0; j <= i; j++)
                {
                    notes[note_count][j] = temp[j];
                }
                note_count++;
                printf("Note added.\n");
            }
            else
            {
                printf("Note limit reached.\n");
            }
            break;

        case 2: // Display Notes
            printf("Notes:\n");
            for (i = 0; i < note_count; i++)
            {
                printf("%d: %s\n", i + 1, notes[i]);
            }
            break;

        case 3: // Calculate Length of a Note
            printf("Select note to check length (1 to %d): ", note_count);
            scanf("%d", &option);
            if (option > 0 && option <= note_count)
            {
                length = 0;
                while (notes[option - 1][length] != '\0')
                {
                    length++;
                }
                printf("Length of note %d: %d\n", option, length);
            }
            else
            {
                printf("Invalid note number.\n");
            }
            break;

        case 4: // Reverse a Note
            printf("Select note to reverse (1 to %d): ", note_count);
            scanf("%d", &option);
            if (option > 0 && option <= note_count)
            {
                length = 0;
                while (notes[option - 1][length] != '\0')
                {
                    length++;
                }
                printf("Reversed note %d: ", option);
                for (i = length - 1; i >= 0; i--)
                {
                    putchar(notes[option - 1][i]);
                }
                putchar('\n');
            }
            else
            {
                printf("Invalid note number.\n");
            }
            break;

        case 5: // Compare Two Notes
            printf("Select first note to compare (1 to %d): ", note_count);
            int note1, note2;
            scanf("%d", &note1);
            printf("Select second note to compare (1 to %d): ", note_count);
            scanf("%d", &note2);
            if (note1 > 0 && note1 <= note_count && note2 > 0 && note2 <= note_count)
            {
                i = 0;
                while (notes[note1 - 1][i] != '\0' && notes[note2 - 1][i] != '\0' && notes[note1 - 1][i] == notes[note2 - 1][i])
                {
                    i++;
                }
                if (notes[note1 - 1][i] == notes[note2 - 1][i])
                {
                    printf("Notes are equal.\n");
                }
                else if (notes[note1 - 1][i] < notes[note2 - 1][i])
                {
                    printf("Note %d is less than Note %d.\n", note1, note2);
                }
                else
                {
                    printf("Note %d is greater than Note %d.\n", note1, note2);
                }
            }
            else
            {
                printf("Invalid note numbers.\n");
            }
            break;

        case 6: // Copy a Note
            printf("Select note to copy (1 to %d): ", note_count);
            scanf("%d", &option);
            if (option > 0 && option <= note_count)
            {
                if (note_count < 10)
                {
                    for (i = 0; notes[option - 1][i] != '\0'; i++)
                    {
                        notes[note_count][i] = notes[option - 1][i];
                    }
                    notes[note_count][i] = '\0'; // Null-terminate the copied note
                    note_count++;
                    printf("Note copied.\n");
                }
                else
                {
                    printf("Note limit reached.\n");
                }
            }
            else
            {
                printf("Invalid note number.\n");
            }
            break;

        case 7: // Concatenate Two Notes
            printf("Select first note to concatenate (1 to %d): ", note_count);
            scanf("%d", &note1);
            printf("Select second note to concatenate (1 to %d): ", note_count);
            scanf("%d", &note2);
            if (note1 > 0 && note1 <= note_count && note2 > 0 && note2 <= note_count)
            {
                if (note_count < 10)
                {
                    for (i = 0; notes[note1 - 1][i] != '\0'; i++)
                    {
                        notes[note_count][i] = notes[note1 - 1][i];
                    }
                    for (j = 0; notes[note2 - 1][j] != '\0'; j++, i++)
                    {
                        notes[note_count][i] = notes[note2 - 1][j];
                    }
                    notes[note_count][i] = '\0'; // Null-terminate the concatenated not
                    note_count++;
                    printf("Notes concatenated.\n");
                }
                else
                {
                    printf("Note limit reached.\n");
                }
            }
            else
            {
                printf("Invalid note numbers.\n");
            }
            break;

        case 8: // Exit
            printf("Exiting application.\n");
            return 0;

        default:
            printf("Invalid option. Please try again.\n");
        }
    }

    printf("\n\nThis program is created by 24CE141_Jenil Viradia.");
    return 0;
}