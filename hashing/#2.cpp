#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cout << "Enter num of elememts: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    int q;
    cout << "Enter num of queriez: ";
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << "Appears " << mpp[num] << " times" << endl;
    }
    return 0;
}