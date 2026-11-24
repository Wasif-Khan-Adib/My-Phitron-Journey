
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string n, int r, char s, int m, int c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    int n;
    cin >> n;

    Student *st[n];

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, math_marks, cls;
        char section;

        cin >> name >> roll >> section >> math_marks >> cls;

        st[i] = new Student(name, roll, section, math_marks, cls);
    }

    int mx = INT_MIN;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (st[i]->math_marks > mx)
        {
            mx = st[i]->math_marks;
            index = i;
        }
    }

    cout << st[index]->name << endl;

    for (int i = 0; i < n; i++)
    {
        delete st[i];
    }

    return 0;
}
