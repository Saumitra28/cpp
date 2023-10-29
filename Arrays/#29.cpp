#include <iostream>
#include <map>
using namespace std;
//hashing via map/unordered map(preffered over array hashing due to bounding issues)
//unoredered map should be preffered most of the times over ordered map
//As unordered map best and avg case TC is O(1) but worst case is O(n)
//(Worst case O(n) is due to a very rare situation of collisions(chaining))
//Where as Ordered map has TC O(logn) as all three cases

void numofelements(int arr[], int n)
{
    // pre computing
    map<int,int> mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;

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
             << num << " repeates " <<mp[num]<< " times";
    }
}
int main()
{
    int arr[] = {1, 3, 5, 5, 2, 2, 2, 1};
    numofelements(arr, 8);
    return 0;
}