#ifndef DELIMITERSTACK_H
#define DELIMITERSTACK_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;
    int maxSize = 100;

public:
    void push(T value) {
        if ((int)elements.size() < maxSize) {
            elements.push_back(value);
        } else {
        cout << "Stack is full!" << endl;
        }
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
        cout << "Stack is empty, cannot pop!" <<endl;
        }
    }

    T top() {
        if (!elements.empty()) {
            return elements.back();
        } else {
        cout << "Stack is empty!" << endl;
            return T();  // Return default value of T
        }
    }

    bool empty() {
        return elements.empty();
    }
};

bool delimiterMatch(const string& expr);

#endif
