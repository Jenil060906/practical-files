#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int Target_Sum = 16;
    int size = 8;
    // Find the pair whose sum is equal to x;
    int i = 0;
    int j = size - 1;
    bool found = false;
    while (i < j)
    {

        if (arr[i] + arr[j] == Target_Sum)
        {
            // Pair founded.
            found = true;
            break;
        }
        else if (arr[i] + arr[j] < Target_Sum)
            // Sum is less than x, then increase the sum.
            i++;
        else
            // Sum is more than x, then decrease the sum.
            j--;
    }
    if (found == true)
        cout << endl
             << "Yes!!";
    else
        cout << endl
             << "No!!";
    return 0;
}