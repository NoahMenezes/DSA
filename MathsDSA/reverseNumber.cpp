#include <iostream>
using namespace std;

class Solution {
public:
    static int reverse(int n) {
        int revNum = 0;
        while (n != 0) {
            int dig = n % 10;
            revNum = (revNum * 10) + dig;
            n = n / 10;
        }
        return revNum;
    }
};

bool isPalindrome(int n) {
    if (n < 0) return false;
    int revNum = Solution::reverse(n);
    return n == revNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << Solution::reverse(num) << endl;
    cout << (isPalindrome(num) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}
