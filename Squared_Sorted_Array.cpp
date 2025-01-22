#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {-25, -3, -1, 0, 2, 10};
    int Length_Of_Array = 6;
    // Arrange square of given elemnts in increasing order.
    int Resultant_Array[Length_Of_Array];
    int i = 0, j = Length_Of_Array - 1, k = Length_Of_Array - 1;
    while (i <= j && k >= 0)
    {
        if (abs(arr[i]) > abs(arr[j]))
        {
            Resultant_Array[k] = arr[i] * arr[i];
            i++;
            k--;
        }
        else
        {
            Resultant_Array[k] = arr[j] * arr[j];
            j--;
            k--;
        }
    }
    // Displaying the resultant squared sorted array. 
    for (int i = 0; i < Length_Of_Array; i++)
        cout << Resultant_Array[i] << " ";
    return 0;
}