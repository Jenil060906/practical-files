#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int array[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> array[i][j];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    int Transpose_Of_Array[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            Transpose_Of_Array[i][j] = array[j][i];
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            cout << Transpose_Of_Array[i][j] << " ";
        cout << endl;
    }
    return 0;
}