#include <iostream>
#include <algorithm> // for sort
using namespace std;
namespace StudentManagement
{
    struct Student
    {
        string name;
        int rollNumber;
        float marks;
        char grade;
    };

    bool cmp(const Student &first, const Student &second)
    {
        if (first.marks != second.marks)
            return first.marks > second.marks;
        return first.name < second.name;
    }

    char getStudentGrade(float marks)
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else if (marks >= 50)
            return 'E';
        else
            return 'F';
    }

    void enterStudentsDetails(Student students[], int noOfStudents)
    {
        for (int i = 0; i < noOfStudents; i++)
        {
            cout << "Enter Student No. " << i + 1 << "'s name: ";
            cin >> students[i].name;
            cout << "Enter Student No. " << i + 1 << "'s roll number: ";
            cin >> students[i].rollNumber;
            cout << "Enter Student No. " << i + 1 << "'s marks: ";
            cin >> students[i].marks;
            students[i].grade = getStudentGrade(students[i].marks);
            cout << endl;
        }
    }

    void displayStudentDetails(Student students[], int noOfStudents)
    {
        cout << "* Students: *" << endl;
        for (int i = 0; i < noOfStudents; i++)
        {
            cout << "Student (" << i + 1 << "):" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Marks: " << students[i].marks << endl;
            cout << "Grade: " << students[i].grade << endl;
            cout << endl;
        }
    }

    void findHighestMarks(Student students[], int noOfStudents)
    {
        int highestIndex = 0;
        for (int i = 1; i < noOfStudents; i++)
        {
            if (students[i].marks > students[highestIndex].marks)
            {
                highestIndex = i;
            }
        }
        cout << "* Student with the highest marks: *" << endl;
        cout << "Name: " << students[highestIndex].name << endl;
        cout << "Roll Number: " << students[highestIndex].rollNumber << endl;
        cout << "Marks: " << students[highestIndex].marks << endl;
        cout << "Grade: " << students[highestIndex].grade << endl;
        cout << endl;
    }

    Student *sortStudents(Student students[], int noOfStudents)
    {
        sort(students, students + noOfStudents, cmp);
        return students;
    }

    void displaySortedStudents(Student students[], int noOfStudents)
    {
        cout << "* Sorted Students: *" << endl;
        for (int i = 0; i < noOfStudents; i++)
        {
            cout << "Student (" << i + 1 << "):" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Marks: " << students[i].marks << endl;
            cout << "Grade: " << students[i].grade << endl;
            cout << endl;
        }
    }
}