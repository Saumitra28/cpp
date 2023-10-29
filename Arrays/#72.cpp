#include <iostream>
#include <vector>
using namespace std;
//a better approach !
vector<int> findTwoElement(vector<int> a)
{
    int n = a.size();
    int hasharr[n + 1] = {0};
    int repeating = -1;
    int missing = -1;
    for (int i = 0; i < n; i++)
        hasharr[a[i]]++;
    for (int i = 1; i < n + 1; i++)
    {
        if (hasharr[i] == 2)
            repeating = i;
        if (hasharr[i] == 0)
            missing = i;
    }

    return {repeating, missing};
}
int main()
{
    vector<int> hm = {2, 2};
    vector<int> result = findTwoElement(hm);
    for (auto i : result)
        cout << i << " ";

    return 0;
}