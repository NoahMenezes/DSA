#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        for (char c : s1) freq1[c - 'a']++;
        for (int i = 0; i < s1.length(); i++) freq2[s2[i] - 'a']++;

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (freq1[i] == freq2[i]) matches++;
        }

        int L = s1.length();
        for (int i = L; i < s2.length(); i++) {
            if (matches == 26) return true;

            int inChar = s2[i] - 'a';
            int outChar = s2[i - L] - 'a';

            // add new char
            freq2[inChar]++;
            if (freq2[inChar] == freq1[inChar]) matches++;
            else if (freq2[inChar] == freq1[inChar] + 1) matches--;

            // remove old char
            freq2[outChar]--;
            if (freq2[outChar] == freq1[outChar]) matches++;
            else if (freq2[outChar] == freq1[outChar] - 1) matches--;
        }

        return matches == 26;
    }
};

int main() {
    Solution sol;
    cout << (sol.checkInclusion("ab", "eidbaooo") ? "True" : "False") << endl;
    cout << (sol.checkInclusion("ab", "eidboaoo") ? "True" : "False") << endl;
}
