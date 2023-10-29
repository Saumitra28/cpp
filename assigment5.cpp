// #include <stdio.h>

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int N;
//     printf("Enter the value of N: ");
//     scanf("%d", &N);

//     int result = fibonacci(N);
//     printf("The %dth term of the Fibonacci series is: %d\n", N, result);

//     return 0;
// }

// ques 1 ends

// #include <stdio.h>

// void fibonacci(int N) {
//     int first = 0, second = 1, next;
    
//     printf("First %d terms of the Fibonacci series:\n", N);
    
//     for (int i = 0; i < N; i++) {
//         if (i <= 1) {
//             next = i;
//         } else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         printf("%d ", next);
//     }
    
//     printf("\n");
// }

// int main() {
//     int N;
//     printf("Enter the number of terms to print: ");
//     scanf("%d", &N);
    
//     fibonacci(N);

//     return 0;
// }


// ques 2 ends

// #include <stdio.h>
// #include <math.h>

// int isPerfectSquare(int x) {
//     int s = sqrt(x);
//     return s * s == x;
// }

// int isFibonacci(int n) {
//     return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (isFibonacci(number)) {
//         printf("%d is in the Fibonacci series\n", number);
//     } else {
//         printf("%d is not in the Fibonacci series\n", number);
//     }

//     return 0;
// }


// ques3 ends

// #include <stdio.h>

// int findHCF(int a, int b) {
//     while (a != b) {
//         if (a > b) {
//             a -= b;
//         } else {
//             b -= a;
//         }
//     }
//     return a;
// }

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     int hcf = findHCF(num1, num2);

//     printf("HCF of %d and %d is %d\n", num1, num2, hcf);

//     return 0;
// }

// ques 4 ends

// #include <stdio.h>

// int findHCF(int a, int b) {
//     while (a != b) {
//         if (a > b) {
//             a -= b;
//         } else {
//             b -= a;
//         }
//     }
//     return a;
// }

// int areCoprime(int a, int b) {
//     return findHCF(a, b) == 1;
// }

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, num2);

//     if (areCoprime(num1, num2)) {
//         printf("%d and %d are co-prime numbers\n", num1, num2);
//     } else {
//         printf("%d and %d are not co-prime numbers\n", num1, num2);
//     }

//     return 0;
// }

// ques 5 ends

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     if (num <= 3) {
//         return true;
//     }
//     if (num % 2 == 0 || num % 3 == 0) {
//         return false;
//     }
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     printf("Prime numbers under 100:\n");
//     for (int i = 2; i < 100; i++) {
//         if (isPrime(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }

// ques 6 ends

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     if (num <= 3) {
//         return true;
//     }
//     if (num % 2 == 0 || num % 3 == 0) {
//         return false;
//     }
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int start, end;
//     printf("Enter two numbers (start and end): ");
//     scanf("%d %d", &start, &end);

//     printf("Prime numbers between %d and %d:\n", start, end);
//     for (int i = start; i <= end; i++) {
//         if (isPrime(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }


// ques 7 ends
// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     if (num <= 3) {
//         return true;
//     }
//     if (num % 2 == 0 || num % 3 == 0) {
//         return false;
//     }
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int findNextPrime(int num) {
//     num++;
//     while (true) {
//         if (isPrime(num)) {
//             return num;
//         }
//         num++;
//     }
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int nextPrime = findNextPrime(number);

//     printf("The next prime number after %d is %d\n", number, nextPrime);

//     return 0;
// }


// ques 8 ends

// #include <stdio.h>
// #include <math.h>

// int isArmstrong(int num) {
//     int originalNum, remainder, n = 0, result = 0;
//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     return (result == num);
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (isArmstrong(number)) {
//         printf("%d is an Armstrong number\n", number);
//     } else {
//         printf("%d is not an Armstrong number\n", number);
//     }

//     return 0;
// }


// ques 9 ends

// #include <stdio.h>
// #include <math.h>

// int isArmstrong(int num) {
//     int originalNum, remainder, n = 0, result = 0;
//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     return (result == num);
// }

// int main() {
//     printf("Armstrong numbers under 1000:\n");
//     for (int i = 1; i < 1000; i++) {
//         if (isArmstrong(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }

// ques 10 ends
