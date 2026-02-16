#include <iostream>
using namespace std;

int main() {
    char ch;

    do {
        int s, q;
        cout << "Enter the number of students: ";
        cin >> s;
        cout << "Enter the number of quizzes: ";
        cin >> q;

        double score[50][50];
        double a[50];

        for (int i = 0; i < s; i++) {
            cout << "\nStudent " << i + 1 << " scores:\n";
            double sum = 0;

            for (int j = 0; j < q; j++) {
                cout << "Quiz " << j + 1 << ": ";
                cin >> score[i][j];
                sum += score[i][j];
            }

            double ave = sum / q;

            ave = (int)(ave * 100 + 0.5) / 100.0;

            a[i] = ave;
        }

        cout << "\nStudent\t";
        for (int j = 0; j < q; j++)
            cout << "Q" << j + 1 << "\t";
        cout << "Average\n";

        for (int i = 0; i < s; i++) {
            cout << i + 1 << "\t";
            for (int j = 0; j < q; j++)
                cout << score[i][j] << "\t";

            cout << a[i] << endl;
        }



        cout << "\nRepeat the program? [Y/N]: ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
