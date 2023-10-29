#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;
int longestconsequtivesubsequence(int a[], int n)
{
    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;

    for (int i = 0; i < n; i++)
        st.insert(a[i]);

    for (auto i : st)
    {
        if (st.find(i - 1) == st.end())
        {
            int cnt = 1;
            int start = i;
            while (st.find(start + 1) != st.end())
            {
                cnt++;
                start++;
                
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main()
{
    int arr[] = {34, 2, 7, 23, 31, 38, 13, 11, 37, 19, 45, 6};
    cout << "Length of Longest subsequence: " << longestconsequtivesubsequence(arr, 12);

    return 0;
}