#include<iostream>
using namespace std;

const  int TOTAL_CLASSES = 30;
const int NUM_SUBJECTS = 5;
class Student {
    private:
    string name;
    string reg_no;
    int age;
    int roll_no;
    int semester;
    int CLASS_ATTENDED;
    float marks[NUM_SUBJECTS];

    public:
    void get_details(){
        cout<<"Enter name of students ";
        cin>>name;
        cout<<"Enter registration number ";
        cin>>reg_no;
        cout<<"Enter age ";
        cin>>age;
        cout<<"Enter roll number ";
        cin>>roll_no;
        cout<<"Enter semester ";
        cin>>semester;
        cout<<"Enter no. of classes you have attend ";
        cin>>CLASS_ATTENDED;
       

        for(int i=1; i<NUM_SUBJECTS; i++){
            cout<<"marks of subject"<<" "<<i<<" ";
            cin>>marks[i];
        }
    }

    void showDetails() const {
        cout << "\nDetails for Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << reg_no << endl;
        cout << "Age: " << age << endl;
        cout << "Semester: " << semester << endl;
        cout << "Classes Attended: " << CLASS_ATTENDED<< endl;
        cout << "Marks: ";
       
        for (int i = 1; i < NUM_SUBJECTS; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

     float getAttendancePercentage() const {
        return (float)CLASS_ATTENDED / TOTAL_CLASSES * 100;
    }

    void printAttendance() const {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", Attendance: " << getAttendancePercentage() << "%\n";
    }

};
int main(){
    int m;
    cout << "Enter number of students: ";
    cin >> m;
    Student students[100];  // Array to store student data

    for (int i = 0; i < m; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].get_details();
    }

    cout << "\nDetails of all students:\n";
    for (int i = 0; i < m; ++i) {
        students[i].showDetails();
    }

    cout << "\nDetails attendance of all students:\n";
    for (int i = 0; i < m; ++i) {
        students[i].printAttendance();
    }
}