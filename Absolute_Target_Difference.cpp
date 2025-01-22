#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {9, 23, 45, 69, 78};
    int Size_Of_Array = 5;
    int Absolute_Target_Difference = 56;
    // Check whether there is any pair with the given absolute difference.
    int i = 0;
    int j = 1;
    bool found = false;
    while (i < Size_Of_Array && j < Size_Of_Array)
    {
        if (abs(arr[i] - arr[j]) == Absolute_Target_Difference)
        {
            found = true;
            break;
        }
        else if (abs(arr[i] - arr[j]) < Absolute_Target_Difference)
            j++;
        else
            i++;
    }
    if (found == true)
        cout << endl
             << "Yes!!";
    else
        cout << endl
             << "No!!";
    return 0;
}