#include <iostream>
using namespace std;

class employee
{
private:
    int id, deptId;
    string name;

public:
    double basicSalary;
    employee()
        : id(0), deptId(0), name("shyam"), basicSalary(0.00) {}

    employee(int id, int deptId, string name, double basicSalary)
        : id(id), deptId(deptId), name(name), basicSalary(basicSalary) {}

    virtual double computeNetSalary()
    {
        cout << "The net salary of " << this->name << " is: " << basicSalary << endl;
        return basicSalary;
    }
};
class manager : public employee
{
private:
    int perfBonus;

public:
    manager(int id, int deptId, int perfBonus, string name, double basicSalary)
        : employee(id, deptId, name, basicSalary), perfBonus(perfBonus)
    {
        cout << "parameter manager is called" << endl;
    }
    double computeNetSalary()
    {
        double netSalary = basicSalary + perfBonus;
        cout << "The net salary of  is: " << netSalary << endl;
        return netSalary;
    }
};

class worker : public employee
{
private:
    int hoursWorked, hourlyRate;

public:
    worker(int id, int deptId, int hoursWorked, int hourlyRate, string name, double basicSalary)
        : employee(id, deptId, name, basicSalary), hoursWorked(hoursWorked), hourlyRate(hourlyRate)
    {
        cout << "Paramerteried worker is called " << endl;
    }

    double computeNetSalary()
    {
        double netSalary = basicSalary + (hoursWorked * hourlyRate);
        cout << "The net salary is: " << netSalary << endl;
        return netSalary;
    }

    double getHourlyRate()
    {
        double hourlyRateCalc = hoursWorked * hourlyRate;
        cout << "The hourly rate of worker is: " << hourlyRateCalc << endl;
        return hourlyRateCalc;
    }
};

int main()
{
    manager M1(1, 101, 5000, "shyam", 100000);
    M1.computeNetSalary();

    worker W1(2, 102, 40, 10, "babu", 5000);
    W1.computeNetSalary();
    W1.getHourlyRate();

    return 0;
}
