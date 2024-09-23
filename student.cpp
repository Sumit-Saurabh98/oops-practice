/* 
Create a class named Student with the following specifications:

Private Data Members:
studentID (int)
name (string)
marks (double)
credits (double)
Public Member Functions:
A constructor that initializes the studentID, name, and marks of the students and calculates the credit as 0.12x of the marks.
A destructor.
A function display to print the details of the student including the calculated credits.
You need to create an array of 3 Student objects, take input for each student from the command line, display the details of all students.

Input:

1
John
85
2
Alice
97
3
Bob
62

Note:- print 2 digits after decimal
in cpp you can use setprecision(2)
in java you can use printf("%.2f", marks);

Output:

Student 1: Student ID: 201, Name: John, Marks: 85.00, Credits: 10.20
Student 2: Student ID: 202, Name: Alice, Marks: 97.00, Credits: 11.64
Student 3: Student ID: 203, Name: Bob, Marks: 62.00, Credits: 7.44
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Student{

    private:
    int studentID;
    string name;
    double marks;
    double credits;

    public:
    Student(){}

    Student(int studentID, const string& name, double marks){
        // pass by value and pass by reference
        this->studentID = studentID;
        this->name = name;
        this->marks = marks;
        credits = marks * 0.12;
    }

    ~Student(){
        cout << "destructor is called" << endl;
    }

    void display(int idx){
        cout << fixed << setprecision(2);
        cout << "Student " << idx << ": Student ID: " << studentID << ", Name: "
        << name << ", Marks: " << marks << ", Credits: " << credits << endl;
    }

};


int main(){

    const int totalStudents = 3;

    Student students[totalStudents];

    for(int i=0; i<totalStudents; i++){

        int studentID;
        string name;
        double marks;

        cin >> studentID;
        cin.ignore();
        getline(cin, name);
        cin >> marks;

       students[i] = Student(studentID, name, marks);
    }


for(int i=0; i<totalStudents; i++){
    students[i].display(i+1);
}


    return 0;
}

