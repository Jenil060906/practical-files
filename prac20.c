#include <stdio.h>
void dw();               // Function to display welcome message
int cns();               // Function to collect the number of students
void cdg(int count);     // Function to collect and display grades
float calave(int count); // Function to calculate average grade

int main()
{
    dw();                                                   // Display welcome message
    int studentCount = cns();                               // Collect the number of students
                                                            // Collect and display grades
    float average = calave(studentCount);                   // Calculate average grade
    printf("\n\nAverage grade of students: %f\n", average); // Display average grade

    printf("\nThis program is created by 24CE141_Jenil Viradia.");
    return 0;
}

// Function to display welcome message
void dw()
{
    printf("Welcome to CHARUSAT University!\n");
    printf("=================================\n");
    printf("\nStudent Grades\n");
}

// Function to collect the number of students
int cns()
{
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    return count;
}

// Function to collect and display grades
void cdg(int count)
{
    int grades[50]; // Array to hold grades
    printf("Enter the grades of %d students:\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("Grade of student %d: ", i + 1);
        scanf("%d", &grades[i]);
        printf("\n%d", grades[i]);
    }
    printf("Grades entered:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
}

// Function to calculate average grade
float calave(int count)
{
    int grades[50];
    int sum = 0;
    printf("Enter the grades of %d students to calculate average:\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("Grade of student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    return (float)sum / count; // Return average
}