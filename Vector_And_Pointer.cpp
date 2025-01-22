#include <iostream>
#include <vector>
using namespace std;
void Sort_Zeroes_And_Ones(vector<int> &v)
{
    int Left_Ptr = 0;
    int Right_Ptr = v.size() - 1;
    while (Left_Ptr < Right_Ptr)
    {
        if (v[Left_Ptr] == 1 && v[Right_Ptr] == 0)
        {
            v[Left_Ptr++] = 0;
            v[Right_Ptr--] = 1;
        }
        if (v[Left_Ptr] == 0)
            Left_Ptr++;
        if (v[Right_Ptr] == 1)
            Right_Ptr--;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    Sort_Zeroes_And_Ones(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}