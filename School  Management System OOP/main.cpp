#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include<Staff.h>
#include <Classroom.h>
#include <Exam.h>
#include <School.h>
using namespace std;

int main()
{
   int n;
   School sh;
    do
    {
        cout<<"Press 0 To Exit "<<endl;
        cout<<"Press 1 To Add Student "<<endl;
        cout<<"Press 2 To Add Teacher "<<endl;
        cout<<"Press 3 To Add Staff "<<endl;
        cout<<"Press 4 To Add Course "<<endl;
        cout<<"Press 5 To Add Class Room "<<endl;
        cout<<"Press 6 To Print All Student "<<endl;
        cout<<"Press 7 To Print All Teacher "<<endl;
        cout<<"Press 8 To Print All Staffs "<<endl;
        cout<<"Press 9 To Print All Courses "<<endl;
        cout<<"Press 10 To Print All Class Rooms "<<endl;
        cin>>n;
        system("cls");

        switch(n)
    {
        case 1:
            {
                cout<<"Enter Student Data\n";
                Student s;
                s.information();
                sh.addstudent(s);
                break;
            }
        case 2:
            {
                cout<<"Enter Teacher Data\n";
                Teacher t;
                t.information();
                sh.addteacher(t);
                break;
            }
        case 3:
            {
                cout<<"Enter Staff Data\n";
                Staff sf;
                sf.information();
                sh.addstaff(sf);
                break;
            }
        case 4:
            {
                cout<<"Enter Course Data\n";
                Course c;
                c.information();
                sh.addcourse(c);
                break;
            }
    case 5:
    {
        cout<<"Enter Class Room Data\n";
        Classroom ro;
        ro.information();
        sh.addclassroom(ro);
        break;
    }
    case 6:
    {
        sh.printAllStudents();
        break;
    }
    case 7:
    {
        sh.printAllTeachers();
        break;
    }
    case 8:
    {
        sh.printAllStaffs();
        break;
    }
    case 9:
    {
        sh.printAllCourses();
        break;
    }
    case 10:
    {
        sh.printAllClassRooms();
        break;
    }

    }

    }
    while(n!=0);

    return 0;
}
