#include <iostream>

using namespace std;

class Student {
public:
    char name[50];
    int status; 

    void entry() {
        cout << "Enter name of student: ";
        cin >> name;

        cout << "Enter pass status (1 for pass, 0 for fail) for " << name << ": ";
        cin >> status;
    }

    void display() {
        cout << "Name: " << name << ", Status: ";
        if (status == 1) {
            cout << "Pass" << endl;
        } else if (status == 0) {
            cout << "Fail" << endl;
        }
    }
};

int main() {
    const int num_s = 10;
    Student students[num_s];
    int p_count = 0;
    int f_count = 0;


    for (int i = 0; i < num_s; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].entry();

        if (students[i].status == 1) {
            p_count++;
        } else if (students[i].status == 0) {
            f_count++;
        }
    }

    cout << endl;
    cout << "Student Summary:" << endl;
    for (int i = 0; i < num_s; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].display();
    }

    cout << "Number of Pass Candidates: " << p_count << endl;
    cout << "Number of Fail Candidates: " << f_count << endl;

    return 0;
}
