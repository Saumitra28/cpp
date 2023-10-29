#include <iostream>
using namespace std;

void makematrixzero(int a[][3], int rows, int cols)
{
    // Print initial matrix
    cout << "Initial matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    // Variables to track if first column and first row need to be zeroed out
    int col0 = a[0][0];

    // Mark boundaries and inside area for zeroing out
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][0] = 0;
                a[0][j] = 0;
            }
        }
    }

    // Zero out elements based on marked boundaries and inside area
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (a[i][0] == 0 || a[0][j] == 0)
                a[i][j] = 0;
        }
    }

    // Zero out the first row if necessary
    if (a[0][0] == 0)
    {
        for (int j = 0; j < cols; j++)
            a[0][j] = 0;
    }

    // Zero out the first column if necessary
    if (col0 == 0)
    {
        for (int i = 0; i < rows; i++)
            a[i][0] = 0;
    }

    // Print final matrix
    cout << "Final matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    makematrixzero(arr, 3, 3);
    return 0;
}
