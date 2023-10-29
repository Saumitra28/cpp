#include <iostream>
using namespace std;
// hashing via array
void numofelements(int arr[], int n)
{
    // pre computing
    int hasharr[n] = {0};
    for (int i = 0; i < n; i++)
        hasharr[arr[i]]++;

    int q;
    cout << "Enter number of queries you have: ";
    cin >> q;   
    while (q--) 
    {
        int num;
        cout<<endl << "Enter "<< "element ";
        cin >> num;
        // fetching
        cout << endl
             << num << " repeates " << hasharr[num] << " times";
    }
}
int main()
{
    int arr[] = {1, 3, 5, 5, 2, 2, 2, 1};
    numofelements(arr, 8);
    return 0;
}