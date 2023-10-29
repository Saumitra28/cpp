#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// optimal approach
int findtotalsubarrayswithaXOR(vector<int> &a, int k)
{
    int n = a.size();
    unordered_map<int, int> mp;
    int xorr = 0;
    mp[xorr]++; // ie initialesd with {0,1} !
    // important in the cases where there is no x type subarray possible so this means that either toh vo pura
    // hi subarray ka sum/xor eq to k ya target h nhi toh no subarry exixt !
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int xorr = xorr ^ a[i];
        // by derived formula prexor ie presum jesa kuch !
        int x = xorr ^ k;
        cnt += mp[x]; // basically mp[x] bhar likhna uss x elemnt k count ko darshata h
        mp[xorr]++;   // agr element xorr hua map m toh uska sirf count bhadh jayega
        // nhi toh agr ni hua toh aajayega !
    }
    return cnt;
}
int main()
{

    return 0;
}