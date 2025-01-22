#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *str = (char *)calloc(8, sizeof(char));

    strcpy(str, " Jenil ");
    printf("Initial string: %s\n", str);

    printf("\n");

    str = (char *)realloc(str, sizeof(char));
    strcat(str, " Jenil Viradia ");
    printf("Modified string : %s\n", str);
    free(str);
    return 0;
}
