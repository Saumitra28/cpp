#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> intersectionSet;

    for (int num : nums2) {
        if (set1.count(num)) {
            intersectionSet.insert(num);
        }
    }

    return vector<int>(intersectionSet.begin(), intersectionSet.end());
}

int main() {
    vector<int> arr1 = {4, 9, 5};
    vector<int> arr2 = {9, 4, 9, 8, 4};
    vector<int> result = intersection(arr1, arr2);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

    return 0;
}
