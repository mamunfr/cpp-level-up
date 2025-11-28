#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int i, string n, char s, int m)
    {
        id = i;
        name = n;
        section = s;
        marks = m;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int i, m;
        string n;
        char s;

        cin >> i >> n >> s >> m;
        Student a(i, n, s, m);

        cin >> i >> n >> s >> m;
        Student b(i, n, s, m);

        cin >> i >> n >> s >> m;
        Student c(i, n, s, m);

        Student topper = a;

        if (b.marks > topper.marks)
        {
            topper = b;
        }
        else if (b.marks == topper.marks && b.id < topper.id)
        {
            topper = b;
        }

        if (c.marks > topper.marks)
        {
            topper = c;
        }
        else if (c.marks == topper.marks && c.id < topper.id)
        {
            topper = c;
        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.marks << endl;
    }

    return 0;
}
