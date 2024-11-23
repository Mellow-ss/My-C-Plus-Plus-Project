#include <iostream>
using namespace std;

int main() {
    // Constants
    const int student_limit = 5; // Maximum number of students that can be added

    // Arrays to store student information
    string name[student_limit];  // Array to store student names
    double grade[student_limit]; // Array to store student grades
    int age[student_limit];      // Array to store student ages

    // Variables for student count and menu option
    int studentCount = 0; // Counter to track the number of students
    int option;           // Variable to store the user's menu option choice

    // Main menu loop
    do {
        // Display the menu
        cout << "== Student Information System ==" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Calculate Average Grade" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option (1-4): ";
        cin >> option;

        // Process the selected menu option
        if (option == 1) {
            // Option 1: Add a new student
            if (studentCount >= student_limit) {
                cout << "Students limit reached. Cannot add more students." << endl;
                cout << "=================================================" << endl; // Design/optional
            } else {
                // Prompt for student details
                cout << "Enter student name: ";
                cin >> name[studentCount];
                cout << "Enter age: ";
                cin >> age[studentCount];

                // Validate and input grade
                double grades;
                cout << "Enter grade: ";
                cin >> grades;

                while (grades < 0 || grades > 100) {
                    cout << "Invalid grade. Enter a grade between 0 and 100: ";
                    cin >> grades;
                }

                // Store the grade and increment the student count
                grade[studentCount] = grades;
                studentCount++;
                cout << "Student added successfully!" << endl;
                cout << "===========================" << endl; // Design/optional
            }
        } else if (option == 2) {
            // Option 2: View all students
            if (studentCount == 0) {
                cout << "No students to display." << endl;
                cout << "=======================" << endl; // Design/optional
            } else {
                cout << "== All Students ==" << endl;
                for (int i = 0; i < studentCount; ++i) {
                    cout << "Name: " << name[i]
                         << " | Age: " << age[i]
                         << " | Grade: " << grade[i] << endl;
                    cout << "===================================" << endl; // Design/optional
                }
            }
        } else if (option == 3) {
            // Option 3: Calculate and display the average grade
            if (studentCount == 0) {
                cout << "No student grades to calculate the average." << endl;
                cout << "==========================================" << endl; // Design/optional
            } else {
                // Calculate total grades and compute average
                double totalGrade = 0;
                for (int i = 0; i < studentCount; ++i) {
                    totalGrade += grade[i];
                }
                double averageGrade = totalGrade / studentCount;
                cout << "Average grade of all students: " << averageGrade << endl;
                cout << "====================================" << endl; // Design/optional
            }
        } else if (option == 4) {
            // Option 4: Exit the program
            cout << "Thank you for using the Student Information System!" << endl;
            cout << "===================================================" << endl; // Design/optional
        } else {
            // Handle invalid menu options
            cout << "Invalid option! Please choose between 1-4." << endl;
            cout << "========================================" << endl; // Design/optional
        }

    } while (option != 4); // Repeat the loop until the user chooses to exit

    return 0;
}
