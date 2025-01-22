#include <iostream>
#include <vector>
using namespace std;
int Largest_Element_Index(int array[], int size)
{
     int max = INT16_MIN;
     int Max_Index = -1;
     for (int i = 0; i < size; i++)
     {
          if (array[i] > max)
          {
               max = array[i];
               Max_Index = i;
          }
     }
     return Max_Index;
}
int main()
{
     int arr[] = {2, 3, 5, 7, 6, 1, 7};
     int size = 7;
     int Index_Of_Largest_Element = Largest_Element_Index(arr, 6);
     cout << endl
          << arr[Index_Of_Largest_Element];
     // arr[Index_Of_Largest_Element] = -1;
     int Largest_Element = arr[Index_Of_Largest_Element];
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == Largest_Element)
               arr[i] = -1;
     }
     int Index_Of_Secondlargest_Element = Largest_Element_Index(arr, 6);
     cout << endl
          << arr[Index_Of_Secondlargest_Element];
     return 0;
}