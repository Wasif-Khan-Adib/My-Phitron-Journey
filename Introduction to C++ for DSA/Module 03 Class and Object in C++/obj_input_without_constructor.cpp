#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;
};

int main()
{
    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}

// 3-5.2