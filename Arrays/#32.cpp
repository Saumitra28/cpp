#include <iostream>
using namespace std;

int turnzeroto1(int a[], int n, int m)
{

    int ans = 0;  // will contain 1s as max of cnt and itsef 
    int cnt = 0;  // will count 1s after the completion of process
    int flip = 0; // will keep a track of numner of flips
    int j = 0;    // will be used to unflip

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            flip++;

        while (flip > m)
        {
            if (a[j] == 0)
                flip--;
            j++;
        }

        cnt = i - j + 1;
        ans = max(ans, cnt);
    }

    return ans;
}

int main()
{
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    cout << "Max number of consecutive 1s after flipping at most 2 zeros: " << turnzeroto1(arr, 11, 2);

    return 0;
}
