#include <iostream>
#include <vector>

using namespace std;
void markrow(int i, int m, vector<vector<int>> &a)
{
    for (int j = 0; j < m; j++)
        if (a[i][j] != 0)
            a[i][j] = -1;
}
void markcolumn(int j, int n, vector<vector<int>> &a)
{
    for (int i = 0; i < n; i++)
        if (a[i][j] != 0)
            a[i][j] = -1;
}
vector<vector<int>> setmatrixzero(vector<vector<int>> &matrix, int n, int m)
{   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                markrow(i, n, matrix);
                markcolumn(j, m, matrix);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
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
