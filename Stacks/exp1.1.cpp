#include <iostream>
#include <string>
using namespace std;

class employee {
public:
    int id;
    float salary;
    string name;

    void getdata();
};

void employee :: getdata(){
        cout << "Enter the employee name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter the employee ID: ";
        cin >> id;

        cout << "Enter the current salary: ";
        cin >> salary;
    }

void updateStatus(employee &e, int maximum) {
    float change;
    char type;

    cout << "Enter 'i' for increment or 'd' for decrement: ";
    cin >> type;

    cout << "Enter amount: ";
    cin >> change;

    if (type == 'i') {
        e.salary += change;
    }
    else if (type == 'd') {
        e.salary -= change;
    }	
    else {
        cout << "Invalid choice!" << endl;
        return;
    }

    cout << "Updated salary: " << e.salary << endl;

    if (e.salary > maximum) {
        cout << "Status: Promoted" << endl << endl;
    }
    else if (e.salary < maximum) {
        cout << "Status: Demoted" << endl << endl;
    }
    else {  // exactly equal to maximum
        cout << "Status: No change" << endl << endl;
    }
}


int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    employee s[n];
    int maximum = 40000;

    for (int i = 0; i < n; i++) {
        s[i].getdata();
        updateStatus(s[i], maximum );
    }

    return 0;
}
