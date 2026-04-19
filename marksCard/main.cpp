#include <iostream>
#include "marksCard.h"

int main() {
    // Create a MarksCard object
    MarksCard student1("John Doe", "IE2006S01",  "20/07/1978", "INST ENGG", "1996", 1);

    // Add subject marks
    student1.addSubjectMarks();

    // Calculate totals and grades
    student1.calculateTotalsAndGrades();

    // Display the marks card
    student1.displayMarksCard();

    return 0;
}