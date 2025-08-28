#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true); // size n, index 0...(n-1)
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;

                for (int j = 2 * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};

int main(void) {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Number of primes less than " << n << " = " << sol.countPrimes(n) << endl;
    return 0;
}
