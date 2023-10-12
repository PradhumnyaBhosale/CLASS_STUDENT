#include <iostream>

using namespace std;

int main() {
    int num_s = 10;
    string names[num_s];
    int status[num_s];
    int p_count = 0;
    int f_count = 0;

    
    for (int i = 0; i < num_s; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter pass status (1 for pass, 0 for fail) for " << names[i] << ": ";
        cin >> status[i];

        if (status[i] == 1) {
            p_count++;
        } else if (status[i] == 0) {
            f_count++;
        }
    }

    
    cout << "Student Summary:" << endl;
    for (int i = 0; i < num_s; i++) {
        cout << "Name: " << names[i] << ", Status: ";
        if (status[i] == 1) {
            cout << "Pass" << endl;
        } else if (status[i] == 0) {
            cout << "Fail" << endl;
        }
    }

    cout << "Number of Pass Candidates: " << p_count << endl;
    cout << "Number of Fail Candidates: " << f_count << endl;

    return 0;
}
