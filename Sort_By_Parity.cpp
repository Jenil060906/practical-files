#include <iostream>
#include <vector>
using namespace std;
void Sort_By_Parity(vector<int> &v)
{
    int Left_Ptr = 0;
    int Right_Ptr = v.size() - 1;
    while (Left_Ptr < Right_Ptr)
    {
        if (v[Left_Ptr] % 2 == 1 && v[Right_Ptr] % 2 == 0)
        {
            swap(v[Left_Ptr], v[Right_Ptr]);
            Left_Ptr++;
            Right_Ptr--;
        }
        if (v[Left_Ptr] % 2 == 0)
            Left_Ptr++;
        if (v[Right_Ptr] % 2 == 1)
            Right_Ptr--;
    }
    return;
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
    Sort_By_Parity(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}