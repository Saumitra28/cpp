#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string largestOddNumber(string num)
{
    int i = num.length();
    int index;
    bool flag = false;
    for (int i = num.length() - 1; i >= 0; i--)
    {
        if (num[i] % 2 != 0)
        {
            index = i;
            flag = true;
            break;
        }
    }
    if (flag)
        return num.substr(0, index + 1);
    return "";
}

int main()
{
    string number = "354270";
    string largestOdd = largestOddNumber(number);

    cout << "Largest Odd Number: " << largestOdd << endl;

    return 0;
}
