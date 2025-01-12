// This program is prepared by 24CE141_Jenil Viradia.
#include <stdio.h>
int main()
{
    int net_population = 14411981744;
    float women_percentage = 48.4;
    float literacy_rate = 85.95;
    float male_literacy_rate = 80.95;
    float female_literacy_rate = 62.24;

    int net_women = ((women_percentage / 100) * net_population);
    int net_men = net_population - net_women;

    int literate_men = ((male_literacy_rate) / 100 * net_men);
    int literate_women = ((female_literacy_rate) / 100 * net_women);

    int illiterate_men = net_men - literate_men;
    int illiterate_women = net_women - literate_women;

    printf("Net population: %d\n", net_population);
    printf("Net men: %d\n", net_men);
    printf("Net literate men: %d\n", literate_men);
    printf("Net illiterate men: %d\n", illiterate_men);
    printf("Net women: %d\n", net_women);
    printf("Net literate women: %d\n", literate_women);
    printf("Net illiterate women: %d\n", illiterate_women);
    printf("\nThis code is prepared by 24CE141_Jenil Viradia.");

    return 0;
}