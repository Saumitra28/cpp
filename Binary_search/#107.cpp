#include <iostream>
#include <vector>
using namespace std;
double median(vector<int> &a, vector<int> &b)
{
    if (b.size() < a.size())
        return median(b, a);
    int n1 = a.size();
    int n2 = b.size();
    int start = 0;
    int end = n1;
    while (start <= end)
    {
        int cut1 = (start + end) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : a[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : a[cut2 - 1];

        int right1 = cut1 == n1 ? INT_MAX : a[cut1];
        int right2 = cut2 == n2 ? INT_MAX : a[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
                return (max(left1, left2) + min(right1, right2));
            else
                return max(left1, left2);
        }
        else if (left1 > right2)
            end = cut1 - 1;
        else
            start = cut1 + 1;
    }
    return 0.0;
}
int main()
{

    return 0;
}