#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include<Staff.h>
#include <Classroom.h>
#include <Exam.h>
#include <Course.h>

using namespace std;

class School
{
private:
    string schoolName;
    string address;
    string principalName;
    int studentcounter=0;
    int teachercounter=0;
    int staffcounter=0;
    int coursecounter=0;
    int classroomcounter=0;
    Student students[1000];
    Teacher teachers[50];
    Staff  staffs[50];
    Course  courses[6];
    Classroom classrooms[50];
public:
    School()
    {
    }
    void setSchoolName(string schoolName)
    {
        this->schoolName=schoolName;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPrincipalName(string principalName)
    {
        this->principalName=principalName;
    }
    string getSchoolName()
    {
        return schoolName;
    }
    string getAddress()
    {
        return address;
    }
    string getPrincipalName()
    {
        return principalName;
    }
    void addstudent(Student stud)
    {
        if(studentcounter==1000)
        {
            cout<<"The Students In School Are Full\n";
        }
        else
        {
            students[studentcounter]=stud;
            studentcounter++;
        }
    }
    void addteacher(Teacher teac)
    {
        if(teachercounter==50)
        {
            cout<<"The Teachers In School Are Full\n";
        }
        else
        {
            teachers[teachercounter]=teac;
            teachercounter++;
        }
    }
    void addstaff(Staff staf)
    {
        if(staffcounter==50)
        {
            cout<<"The Staffs In School Are Full\n";
        }
        else
        {
            staffs[staffcounter]=staf;
            staffcounter++;
        }
    }
    void addcourse(Course cour)
    {
        if(coursecounter==6)
        {
            cout<<"The Courses In School Are Full\n";
        }
        else
        {
            courses[coursecounter]=cour;
            coursecounter++;
        }
    }
    void addclassroom(Classroom clas)
    {
        if(classroomcounter==1000)
        {
            cout<<"The ClassRooms In School Are Full\n";
        }
        else
        {
            classrooms[classroomcounter]=clas;
            classroomcounter++;
        }
    }

    void printAllStudents()
    {  cout<<"________________________________________\n";
        for(int i=0; i<studentcounter; i++)
        {
            students[i].print();
            cout<<endl;
        }
        cout<<"________________________________________\n";
    }
    void printAllTeachers()
    {   cout<<"________________________________________\n";
        for(int i=0; i<teachercounter; i++)
        {
            teachers[i].print();
            cout<<endl;
        }
        cout<<"________________________________________\n";
    }
    void printAllStaffs()
    {   cout<<"________________________________________\n";
        for(int i=0; i<staffcounter; i++)
        {
            staffs[i].print();
            cout<<endl;
        }
        cout<<"________________________________________\n";
    }
    void printAllCourses()
    {   cout<<"________________________________________\n";
        for(int i=0; i<coursecounter; i++)
        {
            courses[i].print();
            cout<<endl;
        }
        cout<<"________________________________________\n";
    }
    void printAllClassRooms()
    {  cout<<"________________________________________\n";
        for(int i=0; i<classroomcounter; i++)
        {
            classrooms[i].print();
            cout<<endl;
        }
        cout<<"________________________________________\n";
    }


    ~School()
    {
    }




};

#endif // SCHOOL_H
