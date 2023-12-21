#include <iostream>
#include <vector>
using namespace std;

vector<int> sort01and2sarr(vector<int> a) {
    int n = a.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;  

    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            swap(a[mid], a[high]);
            high--;
        }
    }

    return a;
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 0, 1, 0, 1, 2};
    vector<int> result = sort01and2sarr(arr);

    // Print the sorted array
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
