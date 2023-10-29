#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

string sortStringByFrequency(string s)
{
    // Step 1: Create a frequency map and sort the characters by frequency
    unordered_map<char, int> frequencyMap;
    for (char c : s)
    {
        frequencyMap[c]++;
    }

    // Step 2: Sort the characters based on their frequencies in descending order
    sort(s.begin(), s.end(), [&](char a, char b)
         {
             if (frequencyMap[a] != frequencyMap[b])
             {
                 return frequencyMap[a] > frequencyMap[b];
             }
             return a > b; // If frequencies are equal, sort characters in descending order
         });

    return s;
}

int main()
{
    string input = "tree";
    string sorted = sortStringByFrequency(input);
    cout << "Sorted string: " << sorted << endl;
    return 0;
}
