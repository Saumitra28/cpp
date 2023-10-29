#include <iostream>
#include <vector>
#include <string>

using namespace std;

string commonPrefix(vector<string> &s, int n)
{
    int i = 0;
    int j = 0;
    string commStr;

    // Iterate through each character of the first string
    for (i = 0; i < s[0].length(); i++)
    {
        // Iterate through each string in the vector
        for (j = 1; j < n; j++)
        {
            // Check if the character at the same index in other strings matches
            if (s[0][i] != s[j][i])
                break;
        }
        // If all characters at the same index in other strings match, add it to the common string
        if (j == n)
            commStr += s[0][i];
        else
            break; // Exit the loop if mismatch is found
    }

    return commStr;
}

int main()
{
    vector<string> s = {"flower", "flow", "flight"};
    int n = s.size();
    string commonPrefixStr = commonPrefix(s, n);

    cout << "Common Prefix: " << commonPrefixStr << endl;

    return 0;
}
