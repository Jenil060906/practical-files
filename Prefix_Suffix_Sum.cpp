#include <iostream>
#include <vector>
using namespace std;
bool Check_Prefix_Suffix_Sum(vector<int> &v)
{
    int Total_Sum = 0;
    for (int i = 0; i < v.size(); i++)
        Total_Sum += v[i];
    int Prefix_Sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        Prefix_Sum += v[i];
        int Suffix_Sum = Total_Sum - Prefix_Sum;
        if (Suffix_Sum == Prefix_Sum)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout << endl
         << "Enter n : ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl
         << Check_Prefix_Suffix_Sum(v);
    return 0;
}