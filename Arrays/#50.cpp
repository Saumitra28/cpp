#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// next permutation optimal approacch
vector<int> nextpermutaion(vector<int> &a)
{
    int index = -1;
    int n = a.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1) // i.e koi esa break point tha hi toh next permutation will be its reverse
    {
        reverse(a.begin(), a.end());
        return a;
    }

    for (int i = n - 1; i > index; i--)
    {
        if (a[i] > a[index])
        {
            swap(a[i], a[index]);
            break;
        }
    }

    reverse(a.begin() + index + 1, a.end());

    return a;
}
int main()
{
    vector<int> arr = {1, 3, 2};
    vector<int> hm = nextpermutaion(arr);

    for (auto i : hm)
        cout << i << " ";

    return 0;
}