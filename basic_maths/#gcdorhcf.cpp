#include <iostream>
using namespace std;
//optimal approach=>Eucledian algo
int calcGCD(int n, int m) {
  while (m > 0 && n > 0) {
    if (m > n)
      m = m % n;
    else
      n = n % m;
  }
  if (m == 0)
    return n;
  return m;

}
int main()
{
    cout << calcGCD(2, 5);
    return 0;
}