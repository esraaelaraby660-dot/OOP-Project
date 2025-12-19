#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course()
    {
    }
    Course(string courseCode,string courseName,string teacherName)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;

    }
    ~Course()
    {
    }
    void SetCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void SetCourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void SetTeacherName(string teacherName)
    {
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void print()
    {
        cout<<"The CourseCode Is : "<<courseCode<<endl;
        cout<<"The CourseName Is : "<<courseName<<endl;
        cout<<"The TeacherName Is : "<<teacherName<<endl;
    }

    void information()
    {
        cout<<"Please Enter Your CourseCode : "<<endl;
        cin>>courseCode;
        cout<<"Please Enter Your CourseName: "<<endl;
        cin>>courseName;
        cout<<"Please Enter Your TeacherName: "<<endl;
        cin>>teacherName;
         cout<<"The Course Is Added Successfully\n";
    }



};

#endif // COURSE_H
