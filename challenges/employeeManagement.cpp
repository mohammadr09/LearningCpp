#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

// We are using a pointer to make a copy of the structure and *update* it
void updateSalary(Employee* emp) { 
    cout << "Enter the updated salary for the employee: ";
    cin >> emp->salary;
}

// const --> signifies that there will be no modification to the structure; "read-only"-ish mode
// We're using the & here to show that we are working DIRECTLY with the structure instead of making a copy of it and
// working with it
void displayEmployee(const Employee& emp) { 
    cout << "Details for ** " << emp.name << " **" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Salary: " << emp.salary << endl;
}

int main() {
    Employee emp;

    cin.ignore();
    cout << "Name: ";
    getline(cin, emp.name);

    cout << "ID: ";
    cin >> emp.id;

    cout << "Salary: ";
    cin >> emp.salary;

    updateSalary(&emp); // Call the function and pass the memory address of emp to change the salary directly

    cout << "Updated salary: " << emp.salary << endl;

    displayEmployee(emp); // Since we're not doing anything to the struct and simply want to view it, this is the most direct way

    return 0;
}