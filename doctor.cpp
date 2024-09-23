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




