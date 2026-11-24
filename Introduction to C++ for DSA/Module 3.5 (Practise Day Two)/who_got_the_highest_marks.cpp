
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int marks;
    int cls;

    Student(string n, int r, char s, int m, int c)
    {
        name = n;
        roll = r;
        section = s;
        marks = m;
        cls = c;
    }
};

int main()
{
    string n1, n2, n3;
    int r1, r2, r3;
    char s1, s2, s3;
    int m1, m2, m3;
    int c1, c2, c3;

    cin >> n1 >> r1 >> s1 >> m1 >> c1;
    cin >> n2 >> r2 >> s2 >> m2 >> c2;
    cin >> n3 >> r3 >> s3 >> m3 >> c3;

    Student st1(n1, r1, s1, m1, c1);
    Student st2(n2, r2, s2, m2, c2);
    Student st3(n3, r3, s3, m3, c3);

    if (st1.marks > st2.marks && st1.marks > st3.marks)
    {
        cout << st1.name << endl;
    }
    else if (st2.marks > st1.marks && st2.marks > st3.marks)
    {
        cout << st2.name << endl;
    }
    else
    {
        cout << st3.name << endl;
    }

    return 0;
}
