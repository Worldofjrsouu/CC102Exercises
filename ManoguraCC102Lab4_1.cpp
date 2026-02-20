#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char Repeat;

    do {
        int students;
        int quizzes;

        cout << "Enter number of students: ";
        cin >> students;

        cout << "Enter number of quizzes: ";
        cin >> quizzes;

        float** scores = new float*[students];
        for (int i = 0; i < students; i++) {
            scores[i] = new float[quizzes];
        }

        float* average = new float[students];


        for (int i = 0; i < students; i++) {
            cout << "\nStudent " << i + 1 << " scores:\n";
            float sum = 0;

            for (int j = 0; j < quizzes; j++) {
                cout << "Q" << j + 1 << ": ";
                cin >> scores[i][j];
                sum += scores[i][j];
            }

            average[i] = sum / quizzes;
        }


        cout << "\nStudent\t";
        for (int j = 0; j < quizzes; j++) {
            cout << "Q" << j + 1 << "\t";
        }

        cout << "Average\n";


        for (int i = 0; i < students; i++) {
            cout << i + 1 << "\t";

            for (int j = 0; j < quizzes; j++) {
                cout << scores[i][j] << "\t";
            }

            cout << fixed << setprecision(2) << average[i] << "\n";
        }

        cout << "  Do you want to run the program again? (y/n): ";
        cin >> Repeat;


        for (int i = 0; i < students; i++) {
            delete[] scores[i];
        }
        delete[] scores;
        delete[] average;

        cout << "\n";

    } while (Repeat == 'y' || Repeat == 'Y');

    cout << "Program is Ended.";
    return 0;
}
