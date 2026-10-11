#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int id;
    float score;
};

void input(Student *p)
{
    cin >> p->name;
    cin >> p->id;
    cin >> p->score;
}

void display(Student *p)
{
    cout << "姓名：" << p->name << endl;
    cout << "学号：" << p->id << endl;
    cout << "成绩：" << p->score << endl;
}

int main()
{
    Student *p = new Student;

    input(p);
    display(p);

    delete p;
    return 0;
}