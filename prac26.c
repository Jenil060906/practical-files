#include <stdio.h>
#include <string.h>

// Structure for Coach details
struct Coach
{
    char name[50];
    int age;
    int experience; // Years of experience
};

// Structure for Team details
struct Team
{
    char teamName[50];
    char sportType[30];
    struct Coach coach; // Nested structure for Coach
};

// For Add a new team
void addTeam(struct Team teams[], int *teamCount)
{
    if (*teamCount >= 100)
    {
        printf("Maximum team limit reached.\n");
        return;
    }

    struct Team *newTeam = &teams[*teamCount];

    printf("Enter team name: ");
    getchar();
    gets(newTeam->teamName);

    printf("Enter sport type: ");
    gets(newTeam->sportType);

    printf("Enter coach name: ");
    gets(newTeam->coach.name);

    printf("Enter coach age: ");
    scanf("%d", &newTeam->coach.age);

    printf("Enter coach experience (in years): ");
    scanf("%d", &newTeam->coach.experience);

    (*teamCount)++;
    printf("Team added successfully!\n");
}

// Function to search for a team by name
void searchTeam(struct Team teams[], int teamCount)
{
    char searchName[50];
    printf("Enter the team name to search: ");
    getchar();
    gets(searchName);

    for (int i = 0; i < teamCount; i++)
    {
        if (strcmp(teams[i].teamName, searchName) == 0)
        {
            printf("\nTeam Found:\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            return;
        }
    }
    printf("Team not found.\n");
}

// Function to display all teams
void displayTeams(struct Team teams[], int teamCount)
{
    if (teamCount == 0)
    {
        printf("No teams to display.\n");
        return;
    }

    printf("\nAll Teams:\n");
    for (int i = 0; i < teamCount; i++)
    {
        printf("Team %d:\n", i + 1);
        printf("  Team Name: %s\n", teams[i].teamName);
        printf("  Sport Type: %s\n", teams[i].sportType);
        printf("  Coach Name: %s\n", teams[i].coach.name);
        printf("  Coach Age: %d\n", teams[i].coach.age);
        printf("  Coach Experience: %d years\n", teams[i].coach.experience);
    }
}

int main()
{
    struct Team teams[100]; // Array to store multiple teams
    int teamCount = 0;      // Counter for number of teams
    int choice;

    do
    {
        printf("\nSports Team Management System\n");
        printf("1. Add a Team\n");
        printf("2. Search for a Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addTeam(teams, &teamCount);
            break;
        case 2:
            searchTeam(teams, teamCount);
            break;
        case 3:
            displayTeams(teams, teamCount);
            break;
        case 4:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    printf("24CE141_Jenil Viradia.\n");

    return 0;
}