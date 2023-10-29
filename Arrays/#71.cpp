#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
    int n = a.size();
    int m = b.size();
    vector<long long> resultant;
    int j = 0;
    int k = 0;
    while (j < m && k < n)
    {
        if (a[j] <= b[k])
        {
            resultant.push_back(a[j]);
            j++;
        }
        else
        {
            resultant.push_back(b[k]);
            k++;
        }
    }
    while (j < n)
    {
        resultant.push_back(a[j]);
        j++;
    }
    while (k < m)
    {
        resultant.push_back(b[k]);
        k++;
    }

    a.clear();
    b.clear();
    for (int i = 0; i < n; i++)
        a.push_back(resultant[i]);
    for (int i = n; i < resultant.size(); i++)
        b.push_back(resultant[i]);

    cout << "A: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "B: ";
    for (int i = 0; i < m; i++)
        cout << b[i] << " ";
}
int main()
{
    vector<long long> A = {1, 4, 5, 7};
    vector<long long> B = {2, 3, 6};
    mergeTwoSortedArraysWithoutExtraSpace(A, B);
    return 0;
}