#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reverseString(string &str)
{
    string ans;
    int start = 0;
    int end = str.length() - 1;

    // Trim leading spaces
    while (start <= end && str[start] == ' ')
    {
        start++;
    }

    // Trim trailing spaces
    while (start <= end && str[end] == ' ')
    {
        end--;
    }

    for (int i = end; i >= start; i--)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            string temp;
            while (i >= start && str[i] != ' ')
            {
                temp = temp + str[i];
                i--;
            }
            reverse(temp.begin(), temp.end());
            ans += temp + ' ';
        }
    }

    // Remove trailing space if present
    if (!ans.empty())
    {
        ans.pop_back();
    }

    return ans;
}
int main()
{
    string s = " I am   a    star";
    string result = reverseString(s);
    for (int i = 0; i < result.length(); i++)
        cout << result[i];
    return 0;
}