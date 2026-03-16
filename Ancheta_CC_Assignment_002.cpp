#include <iostream>
using namespace std;

int main() {
    int student, sub;

    cout << "Input the number of students: ";
    cin >> student;

    cout << "Input the number of subjects: ";
    cin >> sub;

    double** grades = new double*[student];

    for (int i = 0; i < student; i++) {
        grades[i] = new double[sub];
    }

    cout << "\nEnter the Grades:\n";

    for (int i = 0; i < student; i++) {
        cout << "Student " << i + 1 << "\n";
        for (int j = 0; j < sub; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> *(*(grades + i) + j);
        }
    }

    double highest = *(*(grades + 0) + 0);

    cout << "\nStudent Grades:\n";

    cout << "               ";
    for (int j = 0; j < sub; j++) {
        cout << "Sub" << j + 1 << " ";
    }
    cout << endl;

    for (int i = 0; i < student; i++) {
        double sum = 0;

        cout << "Student " << i + 1 << ":   ";

        for (int j = 0; j < sub; j++) {
            cout << *(*(grades + i) + j) << "    ";
            sum += *(*(grades + i) + j);

            if (*(*(grades + i) + j) > highest)
                highest = *(*(grades + i) + j);
        }

        double avg = sum / sub;
        cout << "Average: " << avg << endl;
    }

    cout << "\nHighest Grade: " << highest << endl;

    return 0;
}
