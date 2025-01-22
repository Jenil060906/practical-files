#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[] = {1, 6, 7, 10};
    int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int m = 4;
    int n = 8;
    // Code to merge two arrays.
    int resultant[m + n];
    int i = 0; // Will help us to iterate arr1.
    int j = 0; // Will help us to iterate arr2.
    int k = 0; // Will help us to iterate resultant.
    while (i < m && j < n)
    {
        // Both i and j should be within limits or arr1 and arr2.
        if (arr1[i] < arr2[j])
        {
            resultant[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            resultant[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        // Arr2 was exhausted and we still got elements left in arr1.
        resultant[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        // Arr1 was exhausted and we still got elements left in arr2.
        resultant[k] = arr2[j];
        k++;
        j++;
    }
    for (int i = 0; i < (m + n); i++)
        cout << resultant[i] << " ";
    return 0;
}