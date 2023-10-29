#include <iostream>
#include <vector>
using namespace std;
// second largest && second smallest
vector<int> secondLandS(int a[], int n)
{
    
    int largest = a[0];
    int seclargest = INT_MIN;
    for (int i = 0; i < n; i++)
        if (a[i] > largest)
            largest = a[i];
    // for sec largest
    for (int i = 0; i < n; i++)
        if (a[i] > seclargest && a[i] != largest)
            seclargest = a[i];

    
    int smallest = a[n - 1];
    int secsmallest = INT_MAX;
    for (int i = 0; i < n; i++)
        if (a[i] < smallest)
            smallest = a[i];
    // for sec smallest
    for (int i = 0; i < n; i++)
        if (a[i] < secsmallest && a[i] != smallest)
            secsmallest = a[i];

    return {seclargest, secsmallest};
}
int main()
{
    int a[] = {5, 2, 8, 1, 9, 7};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> result = secondLandS(a, n);

    cout << "Second largest element: " << result[0] << endl;
    cout << "Second smallest element: " << result[1] << endl;

    return 0;
}