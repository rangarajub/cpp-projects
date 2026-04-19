#include "marksCard.h"

MarksCard::MarksCard(string name, string roll, string dob, string course, string year, int sem) 
{
    studentName = name;
    rollNumber = roll;
    dateOfBirth = dob;
    courseName = course;
    academicYear = year;
    semester = sem;
    totalMarks = 0.0;
    averageMarks = 0.0;
    percentage = 0.0;
    grade = "N/A";
    isPassed = false;
    gpa = 0.0;
}

// Functions Implementation
void MarksCard::addSubjectMarks(void) {
    // Get the subjects and corresponding marks from the user
    cout << "Enter the number of subjects: ";
    int numSubjects;
    cin >> numSubjects;

    for (int i = 0; i < numSubjects; i++) {
        string subject;
        float marks;
        cout << "Enter subject name: ";
        cin >> subject;
        cout << "Enter marks for " << subject << ": ";
        cin >> marks;
        subjectMarks[subject] = marks;
    }
}

void MarksCard::calculateTotalsAndGrades(void) {
    // Implementation for calculating totals and grades

    totalMarks = 0.0;
    for (const auto& entry : subjectMarks) {
        totalMarks += entry.second;
    }

    averageMarks = totalMarks / subjectMarks.size();
    percentage = (totalMarks / (subjectMarks.size() * 100)) * 100;
}

void MarksCard::displayMarksCard(void) {
    // Implementation for displaying marks card

    cout << "Student Name: " << studentName << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Date of Birth: " << dateOfBirth << endl;

    cout << "Course Name: " << courseName << endl;
    cout << "Academic Year: " << academicYear << endl;
    cout << "Semester: " << semester << endl;
    cout << "Marks Obtained: " << endl;
    for (const auto& entry : subjectMarks) {
        cout << entry.first << ": " << entry.second << endl;
    }
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (isPassed ? "Yes" : "No") << endl;
    cout << "GPA: " << gpa << endl;
}
