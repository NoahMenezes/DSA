#include <iostream>
#include "DelimiterStack.h"
using namespace std;

bool isOpening(char ch) {
    return ch == '(' || ch == '{' || ch == '[';
}

bool isClosing(char ch) {
    return ch == ')' || ch == '}' || ch == ']';
}

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool delimiterMatch(const string& expr) {
    Stack<char> stack;
    for (char ch : expr) {
        if (isOpening(ch)) {
            stack.push(ch);
        } else if (isClosing(ch)) {
            if (stack.empty() || !isMatching(stack.top(), ch))
                return false;
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(std::cin, expression);

    if (delimiterMatch(expression))
        cout << "Delimiters matched successfully!" << std::endl;
    else
        cout << "Delimiters did NOT match." << std::endl;

    return 0;
}
