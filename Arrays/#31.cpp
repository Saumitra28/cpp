#include <iostream>
using namespace std;
int countnumofconseq1s(int a[], int n)
{
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
            if (ans < cnt)
                ans = cnt;
        }

        else
            cnt = 0;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 0, 1, 1, 1, 0, 1, 1, 0, 0};

    cout << countnumofconseq1s(arr, 10);
    return 0;
}