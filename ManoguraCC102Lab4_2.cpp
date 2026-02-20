#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        double sales[5][4] = {0};
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

                sales[product-1][salesperson-1] += amount;

            } else {
                cout << "Invalid input. Try again.\n";
            }

            cout << "Add another sales slip? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        cout << "\n\nSALES SUMMARY\n\n";

        cout << "Product\tSP1\tSP2\tSP3\tSP4\tTotal\n";

        double grandTotal = 0;

        for (int i = 0; i < 5; i++) {
            double rowTotal = 0;

            cout << i+1 << "\t";

            for (int j = 0; j < 4; j++) {
                cout << sales[i][j] << "\t";
                rowTotal += sales[i][j];
                grandTotal += sales[i][j];
            }

            cout << rowTotal << endl;
        }


        cout << "Total\t";

        for (int j = 0; j < 4; j++) {
            double colTotal = 0;

            for (int i = 0; i < 5; i++) {
                colTotal += sales[i][j];
            }

            cout << colTotal << "\t";
        }

        cout << grandTotal << endl;

        cout << "Do you want to program again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
