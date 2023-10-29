#include <iostream>
#include <vector>
using namespace std;
vector<string> removecornerparn(vector<string> vt)
{
    int n = vt.size();
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (vt[i] == "(" && vt[i + 1] == ")")
            cnt1++;
        if (vt[i] == "(")
            cnt2++;
    }
    int diff = cnt2 - cnt1;
    if (diff == 0)
        return {""};
    vt.clear();
    while (cnt1--)
    {
        vt.push_back("(");
        vt.push_back(")");
    }
    return vt;
}
int main()
{
    vector<string> v = {"(", "(", ")", ")"};
    vector<string> ans = removecornerparn(v);
    cout << "After Removing Outermost parenthesis: ";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}