#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;

    Student(int i, string n, char s, int m)
    {
        id = i;
        name = n;
        section = s;
        total_marks = m;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        Student *st[3];

        for (int i = 0; i < 3; i++)
        {
            int id, total_marks;
            string name;
            char section;

            cin >> id >> name >> section >> total_marks;

            st[i] = new Student(id, name, section, total_marks);
        }

        int index = 0;

        for (int i = 1; i < 3; i++)
        {
            if (st[i]->total_marks > st[index]->total_marks)
            {
                index = i;
            }
            else if (st[i]->total_marks == st[index]->total_marks)
            {
                if (st[i]->id < st[index]->id)
                {
                    index = i;
                }
            }
        }

        cout << st[index]->id << " "
             << st[index]->name << " "
             << st[index]->section << " "
             << st[index]->total_marks << endl;

        for (int i = 0; i < 3; i++)
        {
            delete st[i];
        }
    }

    return 0;
}
