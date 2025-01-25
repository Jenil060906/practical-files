#include <iostream>
#include <vector>
using namespace std;
int Maximum_Ones_Rows(vector<vector<int>> &v)
{
    int Maximum_Ones = INT16_MIN;
    int Max_Ones_Rows = -1;
    int column = v[0].size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int Number_Of_Ones = column - j;
                if (Number_Of_Ones > Maximum_Ones)
                {
                    Maximum_Ones = Number_Of_Ones;
                    Max_Ones_Rows = i;
                }
                break;
            }
        }
    }
    return Max_Ones_Rows;
}
// Alternate approach by finding the left most one in the 2-D matrix.
int Left_Most_OneS(vector<vector<int>> &v)
{
    int Left_Most_One = -1;
    int Max_Ones_Row = -1;
    int j = v[0].size() - 1;
    // Finding left most one in 0th row.
    while (j >= 0 && v[0][j] == 1)
    {
        Left_Most_One = j;
        Max_Ones_Row = 0;
        j--;
    }
    // Check in rest of the rows if there is another one left to the left most one.
    for (int i = 0; i < v.size(); i++)
    {
        while (j >= 0 && v[i][j] == 1)
        {
            Left_Most_One = j;
            j--;
            Max_Ones_Row = i;
        }
    }
    return Max_Ones_Row;
}
int main()
{
    int rows, columns;
    cout << endl
         << "Enter number of rows : ";
    cin >> rows;
    cout << endl
         << "Enter number of columns : ";
    cin >> columns;
    vector<vector<int>> vec(rows, vector<int>(columns));
    cout << endl
         << "Enter the the 2-D matrix below : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cin >> vec[i][j];
    }
    int Resultant_Vector = Maximum_Ones_Rows(vec); // Here the function Left_Most_OneS() can also be used as an alterante function.
    cout << endl
         << "Row with maximum number of ones is : " << endl
         << Resultant_Vector;
    return 0;
}