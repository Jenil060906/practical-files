#include <iostream>
#include <vector>
using namespace std;
int Rectangle_Sum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
            sum += matrix[i][j];
    }
    return sum;
}
int main()
{
    int rows, columns;
    cout << "Enter rows : ";
    cin >> rows;
    cout << "Enter columns : ";
    cin >> columns;
    vector<vector<int>> matrix(rows, vector<int>(columns));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }
    int l1, r1, l2, r2;
    cout << endl
         << "Enter l1 coordinate : ";
    cin >> l1;
    cout << endl
         << "Enter r1 coordinate : ";
    cin >> r1;
    cout << endl
         << "Enter l2 coordinate : ";
    cin >> l2;
    cout << endl
         << "Enter r2 coordinate : ";
    cin >> r2;
    cout << endl
         << "The given matrix is : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    int sum = Rectangle_Sum(matrix, l1, r1, l2, r2);
    cout << endl
         << "The sum from (l1,r1) to (l2,r2) is : " << sum;
    return 0;
}