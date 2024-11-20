#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    double grade;

public:
    Student(string n = "", int r = 0, double g = 0.0)
    {
        name = n;
        rollNumber = r;
        grade = g;
    }

    void setName(string n)
    {
        name = n;
    }

    string getName() const
    {
        return name;
    }

    void setRollNumber(int r)
    {
        rollNumber = r;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }

    void setGrade(double g)
    {
        grade = g;
    }

    double getGrade() const
    {
        return grade;
    }

    bool isPassed() const
    {
        return grade >= 50;
    }
};

int main()
{

    Student student;

    student.setName("John Doe");
    student.setRollNumber(123);
    student.setGrade(65.5);

    cout << "Student Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;
    cout << "Grade: " << student.getGrade() << endl;

    if (student.isPassed())
    {
        cout << "The student has passed." << endl;
    }
    else
    {
        cout << "The student has failed." << endl;
    }

    return 0;
}
