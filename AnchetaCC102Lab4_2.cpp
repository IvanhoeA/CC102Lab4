#include <iostream>
#include <vector>
using namespace std;

int main() {
    char ch;

    do {
        const int prod = 5;
        const int sp = 4;

        vector<vector<double>> sales(prod, vector<double>(sp, 0));

        int salesperson, product;
        double amount;
        char choice;

        do {
            cout << "\nEnter Salesperson number (1-4): ";
            cin >> salesperson;

            cout << "Enter Product number (1-5): ";
            cin >> product;

            cout << "Enter Amount sold: ";
            cin >> amount;

            if (salesperson >= 1 && salesperson <= 4 &&
                product >= 1 && product <= 5) {

                sales[product - 1][sp - 1] += amount;

            } else {
                cout << "Invalid! Try again.\n";
            }



            cout << "Enter another sale? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        cout << "\n\nSales Summary Table\n";
        cout << "\nProduct\tSP1\tSP2\tSP3\tSP4\tTotal\n";
        cout << "-------------------------------------------------\n";





        double T = 0;

        for (int i = 0; i < prod; i++) {
            double rT = 0;

            cout << i + 1 << "\t";

            for (int j = 0; j < sp; j++) {
                cout << sales[i][j] << ".00\t";
                rT += sales[i][j];
            }

            cout << rT << ".00" << endl;
            T += rT;
        }
        cout << "-------------------------------------------------\n";
        cout << "Total\t";

        for (int j = 0; j < sp; j++) {
            double cT = 0;

            for (int i = 0; i < prod; i++) {
                cT += sales[i][j];
            }

            cout << cT << ".00\t";
        }

        cout << T << ".00" << endl;

        cout << "\nRun program again? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
