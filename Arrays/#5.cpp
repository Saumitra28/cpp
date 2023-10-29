#include <iostream>
using namespace std;

// int main()
// {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Hello " << name;

//     return 0;
// }

// OR

// int main()
// {
//     char str[20];
//     cout << "Name: ";
//     fgets(str, 20, stdin); // iski jagah gets(str) bhi use ho skta tha
//     // but ye illegal memory access krleta h therfore not preferrable
//     cout << "Hello " << str;
// }
int main()
{
    char str[5][10]; //= {"Agra", "Noida", "Dehradun", "Risikesh"};

    for (int i = 0; i < 5; i++)
        fgets(str[i], 10, stdin);

    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << str[i] << " ";
}
