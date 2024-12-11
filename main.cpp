#include <iostream>
#include <vector>
#include "student.h"

int main()
{
    // @abdelrahman-salama is a contributor
    int NO_OF_STUDENTS = 3;
    StudentManagement::Student students[NO_OF_STUDENTS];
    StudentManagement::enterStudentsDetails(students, NO_OF_STUDENTS);
    StudentManagement::displayStudentDetails(students, NO_OF_STUDENTS);
    StudentManagement::findHighestMarks(students, NO_OF_STUDENTS);
    StudentManagement::sortStudents(students, NO_OF_STUDENTS);
    StudentManagement::displaySortedStudents(students, NO_OF_STUDENTS);
    return 0;
}
