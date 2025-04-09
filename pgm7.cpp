#include <iostream>
using namespace std;

void printprimes(int n) {
    int primes[101] = {0}; // Adjusted size to include 100
    for (int i = 2; i <= n; ++i) {
        if (primes[i] == 0) { // If i is still marked as prime
            for (int j = i * i; j <= n; j += i) { // Mark multiples of i
                primes[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; ++i) { // Print prime numbers
        if (primes[i] == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    printprimes(100);
    return 0;
}
