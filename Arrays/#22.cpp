#include <iostream>
#include <vector>
using namespace std;
// second largest and smallest(optimal approach !)
vector<int> secondLandS(int a[], int n)
{

    // for sec largest
    int largest = a[0];
    int seclargest = INT_MIN;
    for (int i = 0; i < n; i++)
        if (a[i] > largest)
        {
            seclargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > seclargest)
            seclargest = a[i];

    // for sec smallest
    int smallest = a[n - 1];
    int secsmallest = INT_MAX;
    for (int i = 0; i < n; i++)
        if (a[i] < smallest)
        {
            secsmallest = smallest;
            smallest = a[i];
        }

        else if (a[i] > smallest && a[i] < secsmallest)
            secsmallest = a[i];

    return {seclargest, secsmallest};
}
int main()
{
    int a[] = {5, 2, 18, 11, 9, 7};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> result = secondLandS(a, n);

    cout << "Second largest element: " << result[0] << endl;
    cout << "Second smallest element: " << result[1] << endl;
    return 0;
}