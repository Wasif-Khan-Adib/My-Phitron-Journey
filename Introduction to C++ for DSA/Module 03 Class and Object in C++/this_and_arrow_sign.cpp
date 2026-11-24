#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        (*this).roll = roll; // jodi this errow diye na likhte chai, tahole (*this).roll evabe likhte hobe
        //this->roll = roll;  // this.roll then enter korle errow sign chole asbe.
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student rahim(45, 5, 3.2);
    Student karim(2, 5, 5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

//3-6