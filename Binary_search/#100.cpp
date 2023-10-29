#include <iostream>
#include <vector>
using namespace std;
int findKthPositive(vector<int> vec, int k)
{
    int n = vec.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int missing = vec[mid] - (mid + 1); // since jis index pr ho agr ussey index +1 se minus krogey toh number of
        if (missing < k)                    // uss index se pehle jitney bhi miss hongey vo pta pad jayengey
            start = mid + 1;
        else
            end = mid - 1;
    }
    return end + k + 1; // ab scene esa h ki humara ans supposed to be vec[end]+more(jo bach rhey k)
    // but kisi kisi TC m vec[end]->-1 pr point krney lg jata h tb sirf itna likhna sahi ni so we need some formula
    // more = k-missing and missing =vec[end] - (end + 1) so our ans to be returned will be
    //=>vec[end]+k-(vec[end] - (end + 1) ) =>end+k+1 !
    // aur smjhney k liye diary !
}
int main()
{
    vector<int> hm = {1, 2, 3, 4};
    cout << findKthPositive(hm, 2);

    return 0;
}