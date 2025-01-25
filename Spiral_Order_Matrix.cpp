#include <iostream>
#include <vector>
using namespace std;
void Spiral_Order(vector<vector<int>> &matrix)
{
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;
    int direction = 0;
    while (left <= right && top <= bottom)
    {
        // Left -> Right.
        if (direction == 0)
        {
            for (int column = left; column <= right; column++)
                cout << matrix[top][column] << " ";
            top++;
        }
        // Top -> Bottom.
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
                cout << matrix[row][right] << " ";
            right--;
        }
        // Right -> Left
        else if (direction == 2)
        {
            for (int column = right; column >= left; column--)
                cout << matrix[bottom][column] << " ";
            bottom--;
        }
        // Bottom -> Top.
        else
        {
            for (int row = bottom; row >= top; row--)
                cout << matrix[row][left] << " ";
            left++;
        }
        direction = (direction + 1) % 4;
    }
}
int main()
{
    int rows, columns;
    cout << endl
         << "Enter rows : ";
    cin >> rows;
    cout << endl
         << "Enter columns : ";
    cin >> columns;
    vector<vector<int>> matrix(rows, vector<int>(columns));
    cout << endl
         << "Enter the matrix below : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }
    cout << endl
         << "The elements in spiral order of the given matrix are : " << endl;
    Spiral_Order(matrix);
    return 0;
}