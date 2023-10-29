#include <iostream>
#include <vector>
using namespace std;
// set matrix zero better approach
vector<vector<int>> setmatrixzero(vector<vector<int>> &matrix, int n, int m)
{
    int rowarr[n] = {0};
    int colarr[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowarr[i] = 1;
                colarr[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (rowarr[i] == 1 || colarr[j] == 1)
                matrix[i][j] = 0;
    }
    return matrix;
}
int main()
{
    // Sample matrix
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}};

    int n = matrix.size();    // Number of rows
    int m = matrix[0].size(); // Number of columns

    // Call the setmatrixzero function
    vector<vector<int>> result = setmatrixzero(matrix, n, m);

    // Print the resulting matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}