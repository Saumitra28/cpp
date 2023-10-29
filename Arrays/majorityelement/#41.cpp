#include <iostream>
using namespace std;
// majority element optimal approach->Moore's voting algo

int majorityElement(int a[], int size)
{
    int element;
    int cnt = 0;

    for (int i = 0; i < size; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            element = a[i];
        }
        else if (element == a[i])
            cnt++;
        else
            cnt--;
    }
    // this is when if ques states that there is a possibilty that there is no majorty element in the array
    int count = 0;
    for (int i = 0; i < size; i++)
        if (element == a[i])
            count++;
    if (count > (size / 2))
        return element;
    return -1;
}
int main()
{
    int arr[] = {7, 7, 7, 5, 1, 7, 5, 5, 7, 5, 5, 5, 5};
    if (majorityElement(arr, 5) == -1)
        cout << "None is is majority";
    else
        cout << "Majority element is " << majorityElement(arr, 13);

    return 0;
}