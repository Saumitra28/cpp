#include <iostream>
#include <algorithm>
using namespace std;
//next permutation ques via stl
//not a optimal one but better than brut-> i.e generating all the permutations first and then choosing the next one !
//which will take much much TC !
int main()
{
    int arr[] = {1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // Sort the array in ascending order

    do {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr, arr + n));

    return 0;
}
