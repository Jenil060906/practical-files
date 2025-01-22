#include <stdio.h>
#define max_stu 100

// Function Declaration.
int calculateTotal(int marks[], int count);
float calculateAverage(int marks[], int count);
int findHighest(int marks[], int count);
int findLowest(int marks[], int count);

void main()
{
    int marks[max_stu];
    int studentCount;

    // Ask To user For Students Marks.
    printf("Enter the number of students (max %d): ", max_stu);
    scanf("%d", &studentCount);

    if (studentCount > max_stu)
    {
        printf("Number of students exceeds maximum limit.\n");
    }

    printf("Enter the marks for %d students:\n", studentCount);
    for (int i = 0; i < studentCount; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Function Called.
    int total = calculateTotal(marks, studentCount);
    double average = calculateAverage(marks, studentCount);
    int highest = findHighest(marks, studentCount);
    int lowest = findLowest(marks, studentCount);

    // Display OutPut.
    printf("\nResults:\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);

    printf("\nThis program is created by 24CE141_Jenil Viradia.");
}
int calculateTotal(int marks[], int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += marks[i];
    }
    return total;
}
float calculateAverage(int marks[], int count)
{
    int total = calculateTotal(marks, count);
    return (float)total / count;
}
int findHighest(int marks[], int count)
{
    int highest = marks[0];
    for (int i = 1; i < count; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}
int findLowest(int marks[], int count)
{
    int lowest = marks[0];
    for (int i = 1; i < count; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    return lowest;
}