#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;
bool isIsomorphic(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    unordered_map<char, char> charMap; // Mapping of characters in str1 to str2
    unordered_set<char> mappedChars;   // Set to track mapped characters in str2

    for (int i = 0; i < str1.length(); i++)
    {
        char c1 = str1[i];
        char c2 = str2[i];

        // If c1 already has a mapping, it should map to c2
        if (charMap.count(c1))
        {
            if (charMap[c1] != c2)
                return false;
        }
        // If c1 doesn't have a mapping, c2 should not be already mapped
        else
        {
            if (mappedChars.count(c2))
                return false; // coz,iska mtlb ye h ki c2 kisi aur hi se map hua h but
            // c1 true ni h yaani c1 kbhi map hua ni kisi se toh iska saaf mtlb yahi h ki c2 kii aur se hi mapped h hence false
            charMap[c1] = c2;
            mappedChars.insert(c2);
        }
    }

    return true;
}
int main()
{
    string s = "bbbaaaba";
    string t = "aaabbbba";
    cout << isIsomorphic(s, t);

    return 0;
}