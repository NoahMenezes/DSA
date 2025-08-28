#include<iostream>
#include<string>
#include<cctype>   // for tolower(), isalpha(), isdigit()
using namespace std;

class Solution{
    public:
    bool isAlphaNum(char ch){
        // check if alphanumeric
        if((ch>='0' && ch<='9') || (tolower(ch) >= 'a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s){
        int st=0 , end=s.length()-1;

        while(st<end){
            if(!isAlphaNum(s[st])){
                st++; continue;
            }
            if(!isAlphaNum(s[end])){
                end--; continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++; end--;
        }
        return true;
    }
};

int main(void){
    Solution sol;
    string s = "A man, a plan, a canal: Panama";

    if(sol.isPalindrome(s)){
        cout << "Yes, it's a palindrome!" << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
