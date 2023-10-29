#include <iostream>
#include <vector>
using namespace std;
// gfg ques where +ves and -ves are not equal
void alternatePandN(int a[], int n)
{
    vector<int> pos, neg;
    // keeping all the +ves in pos and -ves in neg
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            pos.push_back(a[i]);
        else
            neg.push_back(a[i]);
    }

    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            a[2 * i] = pos[i];       // at even indices
            a[(2 * i) + 1] = neg[i]; // at odd indices
        }
        int index = 2 * neg.size();
        for (int i = neg.size(); i < n; i++)
        {
            a[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            a[2 * i] = pos[i];       // at even indices
            a[(2 * i) + 1] = neg[i]; // at odd indices
        }
        int index = 2 * pos.size();
        for (int i = pos.size(); i < n; i++)
        {
            a[index] = neg[i];
            index++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int arr[] = {-15, 30, 43, -18, -38, 38, 36, 78, -22, -68, 16, 39, -41, -15, 98, 69, -72, -32};
    int size = sizeof(arr) / sizeof(arr[0]);
    alternatePandN(arr, size);
    return 0;
}
