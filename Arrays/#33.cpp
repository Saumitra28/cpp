#include <iostream>
#include <set>
#include <vector>

using namespace std;
vector<int> unionoftwoarray(int a1[], int a2[], int n1, int n2)
{
    set<int> st;
    for (int i = 0; i < n1; i++)
        st.insert(a1[i]);
    for (int i = 0; i < n2; i++)
        st.insert(a2[i]);

    vector<int> ans(st.size());
    int j = 0;

    for (auto i : st)
        ans[j++] = i;

    return ans;
}
int main()
{
    int arr1[] = {2, 2, 2, 4, 5}; // yes they should be sorted
    int arr2[] = {1, 2, 3, 3};
    vector<int> unnion = unionoftwoarray(arr1, arr2, 5, 4);
    cout << "Union array is " << endl;
    for (auto i : unnion)
        cout << i << " ";
    return 0;
}