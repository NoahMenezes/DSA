#include <iostream>
using namespace std;

template <typename T>
void swapValue(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int choice;
    cout << "Enter choice (1 = int, 2 = double, 3 = string): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int x, y;
            cout << "Enter two integers: ";
            cin >> x >> y;
            swapValue(x, y);
            cout << "After swap: x = " << x << ", y = " << y << endl;
            break;
        }
        case 2: {
            double x, y;
            cout << "Enter two float values: ";
            cin >> x >> y;
            swapValue(x, y);
            cout << "After swap: x = " << x << ", y = " << y << endl;
            break;
        }
        case 3: {
            string x, y;
            cout << "Enter two characters: ";
            cin >> x >> y;
            swapValue(x, y);
            cout << "After swap: x = " << x << ", y = " << y << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
