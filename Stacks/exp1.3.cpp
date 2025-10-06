#include <iostream>
using namespace std;

class complex {
public:
    float real;
    float img;

    complex(float r = 0.0, float i = 0.0) {
        real = r;
        img = i;
    }

    complex operator+(const complex &other) {
        return complex(this->real + other.real, this->img + other.img);
    }

    // Overload unary - operator
    complex operator-() {
        return complex(-this->real, -this->img);
    }

    // Overload extraction operator >> for input
    friend istream& operator>>(istream &in, complex &c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.img;
        return in;
    }

    // Overload insertion operator << for output
    friend ostream& operator<<(ostream &out, const complex &c) {
        if (c.img < 0)
            out << c.real << c.img << "i";
        else
            out << c.real << "+" << c.img << "i";
        return out;
    }
};

int main() {
    complex c1, c2, c3, c4;

    cout << "Enter first complex number:" << endl;
    cin >> c1;
    cout << "Enter second complex number:" << endl;
    cin >> c2;

    cout << "Original c1: " << c1 << endl;
    cout << "Original c2: " << c2 << endl;

    cout << "Binary operator (+): " << endl;
    c3 = c1 + c2;
    cout << "Result of c1+c2: " << c3 << endl;

    cout << "Unary operator (-): " << endl;
    c4 = -c1;
    cout << "Result of -c1: " << c4 << endl;

    return 0;
}
