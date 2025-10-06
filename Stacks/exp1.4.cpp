#include <iostream>
#include <cmath>
using namespace std;

double volume(double r) {
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}

double volume(double r, double h) {
    return M_PI * pow(r, 2) * h;
}

double volume(double r, double h, bool isCone) {
    if (isCone)
        return (1.0 / 3.0) * M_PI * pow(r, 2) * h;
    else
        return volume(r, h);
}

int main() {
    double r, h;

    cout << "Enter radius of sphere: ";
    cin >> r;
    cout << "Volume of sphere = " << volume(r) << endl;

    cout << "\nEnter radius and height of cylinder: ";
    cin >> r >> h;
    cout << "Volume of cylinder = " << volume(r, h) << endl;

    cout << "\nEnter radius and height of cone: ";
    cin >> r >> h;
    cout << "Volume of cone = " << volume(r, h, true) << endl;

    return 0;
}
