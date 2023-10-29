#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (int i = 0; i < str1.length(); i++)
        mp1[str1[i]]++; // Use str1[i] as the key
    for (int i = 0; i < str2.length(); i++)
        mp2[str2[i]]++; // Use str2[i] as the key

    for (const auto &pair : mp1)
    {
        char key = pair.first;
        int count = pair.second;

        if (!mp2.count(key))
            return false;
        else
        {
            if (mp2[key] == count)
                continue;
        }
    }
    return true;
}

int main()
{
    cout << isAnagram("aacc", "ccac");
    return 0;
}
