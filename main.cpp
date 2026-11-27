#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int studentCount = 0;
    double totalOfAverages = 0;

    cout << "Student name (or end to finish): ";
    cin >> name;

    while (name != "end") {
        int sum = 0;

        for (int i = 1; i <= 5; i++) {
            int score;
            cout << "Score " << i << ": ";
            cin >> score;

            while (score < 0 || score > 100) {
                cout << "Invalid score. Enter a value from 0 to 100." << endl;
                cout << "Score " << i << ": ";
                cin >> score;
            }
            sum += score;
        }

        double average = sum / 5.0;
        char grade;

        if (average >= 90) {
            grade = 'A';
        } else if (average >= 75) {
            grade = 'B';
        } else if (average >= 60) {
            grade = 'C';
        } else {
            grade = 'F';
        }

        cout << fixed << setprecision(1);
        cout << name << ": average " << average << ", grade " << grade << endl;

        studentCount++;
        totalOfAverages += average;

        cout << "Student name (or end to finish): ";
        cin >> name;
    }

    if (studentCount == 0) {
        cout << "No students entered" << endl;
    } else {
        cout << "Students entered: " << studentCount << endl;
        cout << "Class average: " << totalOfAverages / studentCount << endl;
    }

    return 0;
}
