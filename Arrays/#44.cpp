#include <iostream>
#include <vector>
using namespace std;
// leetcode stocks ques
int maxprofit(vector<int> &prices)
{
    int mini = prices[0];
    int maxprofit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - mini;
        maxprofit = max(maxprofit, cost);
        mini = min(mini, prices[i]);
    }
    return maxprofit;
}
int main()
{
    vector<int> vt = {7, 1, 6, 4, 5, 3};
    cout << maxprofit(vt);

    return 0;
}