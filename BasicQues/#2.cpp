#include <iostream>
using namespace std;
unsigned long reverseBits(unsigned long n) {
    unsigned long result = 0;
    int bitCount = 32;

    while (bitCount--) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }

    return result;
}
int main()
{
    
    return 0;
}