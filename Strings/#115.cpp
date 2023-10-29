#include <iostream>
#include <string>
#include <vector>

using namespace std;

string removeOuterParentheses(const string& s) {
    string result = "";
    int openCount = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(') {
            if (openCount > 0) {
                result += c;
            }
            openCount++;
        } else {
            openCount--;
            if (openCount > 0) {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    string s = "(()())(())(()(()))";
    string result = removeOuterParentheses(s);

    cout << result << endl;

    return 0;
}
