#include <iostream>
using namespace std;
void pattern1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i + 1; j++)
            cout << "*"
                 << " ";
        cout << endl;
    }
}
void pattern2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
                cout << "*"
                     << " ";
            else
                cout << "";
        }
        cout << endl;
    }
}
void pattern3()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
                cout << "*"
                     << " ";
            else
                cout << "";
        }
        cout << endl;
    }
}
void pattern4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j < 6 - i)
                cout << "*"
                     << " ";
            else
                cout << "";
        }
        cout << endl;
    }
}
void pattern5()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= i + 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    pattern5();
    return 1;
}