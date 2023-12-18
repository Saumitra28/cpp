#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> result;

    if (n < 2) {
        return result;
    }

    int smallest = numeric_limits<int>::max();
    int secondSmallest = numeric_limits<int>::max();
    int largest = numeric_limits<int>::min();
    int secondLargest = numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest && a[i] > smallest) {
            secondSmallest = a[i];
        }

        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] < largest) {
            secondLargest = a[i];
        }
    }

    result.push_back(secondSmallest);
    result.push_back(secondLargest);

    return result;
}

int main() {
    // Example usage:
    int n = 6;
    std::vector<int> input = {3, 1, 4, 1, 5, 9};

    std::vector<int> result = getSecondOrderElements(n, input);

    // Print the result
    for (int element : result) {
        std::cout << element << " ";
    }

    return 0;
}
