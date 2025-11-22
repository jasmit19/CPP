

#include <iostream>
using namespace std;

// -------- Base Class --------
class Person {
public:
virtual void GetRole() = 0; // pure virtual
virtual void DisplayDetails() = 0; // pure virtual
virtual ~Person() {} // virtual destructor
};

// -------- Student Class --------
class Student : public Person {
private: // encapsulation
int rollNo;
string name;
string course;
float marks;
public:
Student(int r, string n, string c, float m) {
rollNo = r;
name = n;
course = c;
marks = m;
}

void GetRole() override {
cout << "Role: Student" << endl;
}

void DisplayDetails() override {
cout << "RollNo: " << rollNo
<< ", Name: " << name
<< ", Course: " << course
<< ", Marks: " << marks << endl;
}

float getMarks() { return marks; } // getter for marks
~Student() {}
};

// -------- Faculty Class --------
class Faculty : public Person {
private:
int employeeID;
string name;
string subject;
public:
Faculty(int id, string n, string s) {
employeeID = id;
name = n;
subject = s;
}

void GetRole() override {
cout << "Role: Faculty" << endl;
}

void DisplayDetails() override {
cout << "EmployeeID: " << employeeID
<< ", Name: " << name
<< ", Subject: " << subject << endl;
}

~Faculty() {}
};

// -------- Main Function --------
int main() {
Person* people[7]; // base class pointer array

// 5 Students
people[0] = new Student(1, "Alice", "CS", 85);
people[1] = new Student(2, "Bob", "IT", 90);
people[2] = new Student(3, "Charlie", "ECE", 75);
people[3] = new Student(4, "David", "ME", 80);
people[4] = new Student(5, "Eve", "CS", 95);

// 2 Faculty
people[5] = new Faculty(101, "Dr. Smith", "Maths");
people[6] = new Faculty(102, "Prof. John", "Physics");

cout << "\n=== Details ===\n";
float totalMarks = 0;
int studentCount = 0;

for (int i = 0; i < 7; i++) {
people[i]->GetRole();
people[i]->DisplayDetails();

// check if object is student
Student* s = dynamic_cast<Student*>(people[i]);
if (s != nullptr) {
totalMarks += s->getMarks();
studentCount++;
}
cout << "-----------------\n";
}

cout << "Average Marks of Students = "
<< (totalMarks / studentCount) << endl;

// cleanup
for (int i = 0; i < 7; i++) {
delete people[i];
}

return 0;
}