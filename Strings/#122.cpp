    #include <iostream>
#include <string>

int isCyclicRotation(std::string& p, std::string& q) {
    if (p.length() == q.length() && (p + p).find(q) != std::string::npos)
        return 1;
    return 0;
}

int main() {
    std::string p, q;

    std::cout << "Enter the first string (p): ";
    std::cin >> p;

    std::cout << "Enter the second string (q): ";
    std::cin >> q;

    int result = isCyclicRotation(p, q);

    if (result == 1)
        std::cout << "q is a cyclic rotation of p." << std::endl;
    else
        std::cout << "q is NOT a cyclic rotation of p." << std::endl;

    return 0;
}
