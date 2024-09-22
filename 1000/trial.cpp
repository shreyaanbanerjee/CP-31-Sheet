#include <iostream>
#include <vector>
#include <cstring> // For memset

using namespace std;

vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    vector<int> primes; 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            primes.push_back(p);
        }
    }

    return primes; 
}

int main() {
    int n = 50;
    vector<int> primes = SieveOfEratosthenes(n);

    // Print the primes (if you want to see them)
    for (int prime : primes) {
        cout << prime << " ";
    }

    return 0;
}