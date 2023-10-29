#include <iostream>
using namespace std;
bool arrequal(int A[], int B[], int na, int nb)
{
    if (na != nb)
        return false;
    int Acnt[] = {1, 1, 1, 1, 1};
    int Bcnt[] = {1, 1, 1, 1, 1};
    int i, j;
    for (i = 0; i < na; i++)
    {
        for (j = 0; j < nb; j++)
        {
            if (A[i] == B[j])
            {
                if (Acnt[i] == Bcnt[j])
                    ;
                else
                    break;
            }
        }
        if (j < nb)
            return false;
    }
    return true;
}
int main()
{
    int arrA[] = {1, 2, 5, 4, 0};
    int arrB[] = {1, 4, 5, 0, 1};
    cout << arrequal(arrA, arrB, 5, 5);
    return 0;
}