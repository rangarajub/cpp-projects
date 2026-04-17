#ifndef MARKSCARD_H
#define MARKSCARD_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MarksCard {
    private:
    
    // Identity attributes
    string studentName;
    string rollNumber;
    string dateOfBirth;

    // Academic attributes
    string courseName;
    string academicYear;
    int semester;

    // Marks Data
    int numSubjects;
    map<string, float> subjectMarks; // Subject name and marks obtained
    float totalMarks;
    float averageMarks;
    float percentage;

    // Performance attributes
    string grade;
    bool isPassed;
    float gpa;

    public:

    // Constructor
    MarksCard(string name, string roll, string dob, string course, string year, int sem);

    // Functions
    void addSubjectMarks(void);
    void calculateTotalsAndGrades(void);
    void displayMarksCard(void);
}   

#endif // MARKSCARD_H