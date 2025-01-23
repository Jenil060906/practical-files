#include <iostream>
#include <vector>
using namespace std;
// Creating a vector function returning the format of the pascal triangle.
vector<vector<int>> Pascal_Triangle(int n)
{
    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1);
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
        }
    }
    return pascal;
}
int main()
{
    int Length_Of_Vector;
    cout << endl
         << "Enter the size of vector : ";
    cin >> Length_Of_Vector;
    // Creating a resultant vector which will store the pascal triangle.
    vector<vector<int>> Resultant_Vector;
    Resultant_Vector = Pascal_Triangle(Length_Of_Vector);
    // Dispalying the pascal triangle.
    cout << endl
         << "Here is our pascal triangle : " << endl;
    for (int i = 0; i < Resultant_Vector.size(); i++)
    {
        for (int j = 0; j < Resultant_Vector[i].size(); j++)
            cout << Resultant_Vector[i][j] << " ";
        cout << endl;
    }
    return 0;
}