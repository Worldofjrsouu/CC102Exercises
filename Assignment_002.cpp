// Jay Jasper Manogura
//BSCS-1B

#include <iostream>
using namespace std;

void analyzeGrades(int *arr, int students, int subjects) {

    cout << "\nGrade Matrix\n";

   
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            cout << *(arr + i * subjects + j) << " ";
        }
        cout << endl;
    }


    cout << "Average Grade per Student ";

    for(int i = 0; i < students; i++) {
        int sum = 0;

        for(int j = 0; j < subjects; j++) {
            sum += *(arr + i * subjects + j);
        }

        double average = (double)sum / subjects;
        cout << "Student " << i + 1 << " Average: " << average << endl;
    }


    int highest = *(arr); 

    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            if(*(arr + i * subjects + j) > highest) {
                highest = *(arr + i * subjects + j);
            }
        }
    }

    cout << "\nHighest Grade in the Matrix: " << highest << endl;
}

int main() {

    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    int grades[100][100];

    cout << "\nEnter grades for each student\n";

    for(int i = 0; i < students; i++) {
        cout << "\nStudent " << i + 1 << endl;
        for(int j = 0; j < subjects; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    analyzeGrades(&grades[0][0], students, subjects);

    return 0;
}