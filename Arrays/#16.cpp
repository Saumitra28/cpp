#include <iostream>
#include <vector>
using namespace std;

vector<int> generaterow(int n)
{
    long long ans = 1;
    vector<int> ansrow;
    ansrow.push_back(1);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i) / i;
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector<int>> printpascal(int n)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
        ans.push_back(generaterow(i));
    
    return ans;
}

int main()
{
    int n = 7;
    vector<vector<int>> triangle = printpascal(n);

    // Printing the Pascal triangle
    for (const auto& row : triangle)
    {
        for (const auto& num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
