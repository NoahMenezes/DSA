#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
    string removeOccurences(string s, string part){
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main(void){
    Solution sol;
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << "Original string: " << s << endl;
    cout << "After removing occurrences of \"" << part << "\": " 
         << sol.removeOccurences(s, part) << endl;

    return 0;
}
