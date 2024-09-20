/*
Create a class named Doctor with the following specifications:

Private Data Members:
DoctorID (int)
doctorType (string)
experience (double)
Public Member Functions:
A constructor that initializes the doctorID, doctorType, and experience of the doctor.
A destructor.
A function display to print the details of the doctor.
You need to create an array of 3 Doctor objects, take input for each doctor from the command line, display the details of all doctors.

Input:-
1
Cardiologist
4.5
2
Neurologist
8.3
3
Radiologist
1.9

Output:

Doctor 1: Doctor ID: 1, Type: Cardiologist, Experience: 4.5
Doctor 2: Doctor ID: 2, Type: Neurologist, Experience: 8.3
Doctor 3: Doctor ID: 3, Type: Radiologist, Experience: 1.9

*/

#include <iostream>
#include <string>
using namespace std;

class Doctor{

    private:
     int doctorID;
     string doctorType;
     double experience;

    public:

    Doctor(){}
    Doctor(int doctorID, const string& doctorType, double experience){
        // pass by value and pass by reference
        this->doctorID = doctorID;
        this->doctorType = doctorType;
        this->experience = experience;
    } 

    ~Doctor(){}

    void display(int idx){
        cout << "Doctor " << idx << ": Doctor ID: " << doctorID
         << ", Type: " << doctorType << ", Experience: " << experience << endl;
    }

};


int main(){

    const int totalDoctors = 3;

    Doctor doctors[totalDoctors];

    for(int i = 0; i < totalDoctors; i++){

        int doctorID;
        string doctorType;
        double experience;

        cin >> doctorID;
        cin.ignore();
        getline(cin, doctorType);
        cin >> experience;


        doctors[i] = Doctor(doctorID, doctorType, experience);
    }

    for(int i = 0; i < totalDoctors; i++){
        doctors[i].display(i + 1);
    }

    return 0;
}



// Practice Question

/* 1.
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

Student 1: Student ID: 1, Name: John, Marks: 85.00, Credits: 10.20
Student 2: Student ID: 2, Name: Alice, Marks: 97.00, Credits: 11.63
Student 3: Student ID: 3, Name: Bob, Marks: 62.00, Credits: 7.43
*/

/*
Hints:- 

Constructor(id, name, marks){

    this->studentID = id;
    this->name = name;
    this->marks = marks;
    this->credits = 0.12 * marks;
}
*/

/*
Practice Question - 2

Create a class named Car with the given specifications:

Private Data Members:

carID (int)
brand (string)
price (double)
registrationCost (double)
Public Member Functions:

A constructor that initializes the carID, brand, and price of the Car and calculates the registration cost as 0.21x of the price.
A destructor.
A function display to print the details of the car including the calculated registration cost.
You need to create an array of 3 Car objects, take input for each car from the command line, display the details of all cars.

Example:

Input:

1
CAR1
32454.00
2
CAR2
92554.00
3
CAR3
62354.00

Output:

Car 1: Car ID: 1, Brand: CAR1, Price: 32454.00, Registration Cost: 6815.34
Car 2: Car ID: 2, Brand: CAR2, Price: 92554.00, Registration Cost: 19436.34
Car 3: Car ID: 3, Brand: CAR3, Price: 62354.00, Registration Cost: 13094.34
*/







