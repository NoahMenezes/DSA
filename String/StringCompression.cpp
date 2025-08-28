#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n;) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[idx++] = ch;
            if (count > 1) {
                string str = to_string(count);
                for (char dig : str) {
                    chars[idx++] = dig;
                }
            }
        }

        return idx;  // compressed length
    }
};

int main(void) {
    Solution sol;
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int len = sol.compress(chars);
    cout << "Compressed Length: " << len << endl;
    cout << "Compressed Array: ";
    for (int i = 0; i < len; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    return 0;
}
