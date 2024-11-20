#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    double salary;

public:
    Employee(string n = "", double s = 0.0) : name(n), salary(s) {}
    virtual double calculateEarnings() const { return salary; }
    string getName() const { return name; }
    double getSalary() const { return salary; }
};

class Manager : public Employee
{
private:
    double bonus;

public:
    Manager(string n, double s, double b) : Employee(n, s), bonus(b) {}
    double calculateEarnings() const override { return getSalary() + bonus; }
};

class Intern : public Employee
{
private:
    double hoursWorked, hourlyRate;

public:
    Intern(string n, double h, double r) : Employee(n, 0), hoursWorked(h), hourlyRate(r) {}
    double calculateEarnings() const override { return hoursWorked * hourlyRate; }
};

int main()
{
    Manager manager("Alice", 5000, 1000);
    Intern intern("Bob", 160, 15);

    cout << "Manager: " << manager.getName() << "\nTotal Earnings: " << manager.calculateEarnings() << endl;
    cout << "Intern: " << intern.getName() << "\nTotal Earnings: " << intern.calculateEarnings() << endl;

    return 0;
}
