#include <iostream>
#include <string>
using namespace std;

class Grade {
public:
    int mark;
    char the_grade;

    // Constructor
    Grade() : mark(0), the_grade(' ') {}

    // Function to calculate and set the grade based on the mark
    void calculateGrade() {
        if (mark > 69)
            the_grade = 'A';
        else if (mark > 59)
            the_grade = 'B';
        else if (mark > 49)
            the_grade = 'C';
        else if (mark > 39)
            the_grade = 'D';
        else
            the_grade = 'E';
    }
};

class Course {
public:
    string course_code;
    string course_name;
};

class Student {
public:
    string registration_number;
    string name;
    int age;
    Course course;
    Grade grade;
    bool grade_calculated;

    // Constructor
    Student() : age(0), grade_calculated(false) {}

    // Function to input details for a student
    void inputDetails() {
        cout << "Enter Registration number: ";
        cin >> registration_number;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter course code: ";
        cin >> course.course_code;
        cout << "Enter course Name: ";
        cin >> course.course_name;
        cout << "Enter student marks: ";
        cin >> grade.mark;
        grade_calculated = false;
    }

    // Function to display details for a student
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Registration Number: " << registration_number << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course Code: " << course.course_code << endl;
        cout << "Course Name: " << course.course_name << endl;
        cout << "Mark: " << grade.mark << endl;
        cout << "Grade: " << grade.the_grade << endl;
    }

    // Function to calculate grades
    void calculateGrades() {
        if (!grade_calculated) {
            grade.calculateGrade();
            grade_calculated = true;
        }
    }

    // Function to correct errors
    void correctErrors() {
        cout << "Enter new details for the student:" << endl;
        inputDetails();
    }
};

int main() {
    const int MAX_STUDENTS = 2;
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].inputDetails();
    }

    for (int i = 0; i < MAX_STUDENTS; i++) {
        students[i].displayDetails();
    }

    char continueErrorCheck;
    do {
        int noErrors;
        cout << "Enter number of students with error in entry (enter 0 for no errors):";
        cin >> noErrors;

        if (noErrors != 0) {
            for (int i = 0; i < noErrors; i++) {
                int errorIndex;
                cout << "Enter student index:";
                cin >> errorIndex;
                if (errorIndex >= 0 && errorIndex < MAX_STUDENTS) {
                    students[errorIndex].correctErrors();
                } else {
                    cout << "Invalid student index." << endl;
                }
            }
        }

        for (int i = 0; i < MAX_STUDENTS; i++) {
            students[i].displayDetails();
        }

        cout << "Do you want to continue error checking? (Y/N): ";
        cin >> continueErrorCheck;
    } while (continueErrorCheck == 'Y' || continueErrorCheck == 'y');

    for (int i = 0; i < MAX_STUDENTS; i++) {
        students[i].calculateGrades();
        students[i].displayDetails();
    }

    return 0;
}
