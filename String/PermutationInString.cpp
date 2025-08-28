#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // count freq of s1 and first window of s2
        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // check first window
        if (isFreqSame(freq1, freq2)) return true;

        // slide the window
        for (int i = s1.length(); i < s2.length(); i++) {
            // add new char
            freq2[s2[i] - 'a']++;
            // remove old char
            freq2[s2[i - s1.length()] - 'a']--;

            if (isFreqSame(freq1, freq2)) return true;
        }

        return false;
    }
};

int main(void) {
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << (sol.checkInclusion(s1, s2) ? "True" : "False") << endl;

    return 0;
}
