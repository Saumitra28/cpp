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
void pattern6()
{
    int k;
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k)
            {
                cout << "*";
                k = 0;
            }

            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    } // here with the help of 'k' variable,we are able to print alternatively like first a * then a space
}
void pattern7()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 6 - i || j >= i + 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern8()
{
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= i + 4)
            {
                cout << k;
                j < 5 ? k++ : k--;
            }

            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern9()
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
void pattern10()
{
    int k = 0;
    for (int i = 1; i <= 9; i++)
    {
        i <= 5 ? k++ : k--;
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 6 - k || j >= k + 4)
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
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    pattern10();
    return 1;
}