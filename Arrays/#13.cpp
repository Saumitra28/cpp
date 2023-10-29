#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int j = i;
        cout << 1 << " ";
        i++;
        while (i--)
        {
            if (i == 0)
                break;
            cout << i << " ";
        }
        cout << i << " ";
        i = j;
        if (j != 0 && j != 1)
            cout << 1 << " " << endl;
    }
    return 0;
}