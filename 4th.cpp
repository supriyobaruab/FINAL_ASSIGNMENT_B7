#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string stdID;
    string name;
    string department;
    float semesterGrades[8];

    void setInfo(string id, string n, string dept, float grades[8])
    {
        stdID = id;
        name = n;
        department = dept;
        for (int i = 0; i < 8; ++i)
        {
            semesterGrades[i] = grades[i];
        }
    }

    void displayInfo() const
    {
        cout << "Student ID: " << stdID << "\n"
             << "Name: " << name << "\n"
             << "Department: " << department << "\n";
    }

    float SGPA(int semester) const
    {
        if (semester < 1 || semester > 8)
        {
            cerr << "Invalid semester number.\n";
            return 0.0f;
        }
        return semesterGrades[semester - 1];
    }

    float CGPA() const
    {
        float total = 0;
        for (int i = 0; i < 8; ++i)
        {
            total += semesterGrades[i];
        }
        return total / 8;
    }

    float waiver() const
    {
        float cgpa = CGPA();
        if (cgpa >= 3.75)
            return 50.0f;
        else if (cgpa >= 3.50)
            return 25.0f;
        else if (cgpa >= 3.00)
            return 10.0f;
        else
            return 0.0f;
    }
};

int main()
{

    Student std1, std2;

    float grades1[8] = {3.8, 3.9, 3.7, 3.6, 3.9, 4.0, 3.8, 4.0};
    float grades2[8] = {3.2, 3.4, 3.6, 3.5, 3.3, 3.5, 3.7, 3.8};

    std1.setInfo("S001", "Alice", "Computer Science", grades1);

    std2.setInfo("S002", "Bob", "Electrical Engineering", grades2);

    cout << "Student 1 Information:\n";
    std1.displayInfo();
    cout << "Semester 1 SGPA: " << std1.SGPA(1) << "\n";
    cout << "CGPA: " << std1.CGPA() << "\n";
    cout << "Waiver: " << std1.waiver() << "%\n\n";

    cout << "Student 2 Information:\n";
    std2.displayInfo();
    cout << "Semester 1 SGPA: " << std2.SGPA(1) << "\n";
    cout << "CGPA: " << std2.CGPA() << "\n";
    cout << "Waiver: " << std2.waiver() << "%\n";

    return 0;
}
