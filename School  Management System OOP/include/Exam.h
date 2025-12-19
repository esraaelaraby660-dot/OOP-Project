#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;

class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam()
    {
    }
    Exam(string examName,string courseCode,string examDate)
    {
        this->examName=examName;
        this->courseCode=courseCode;
        this->examDate=examDate;

    }
    ~Exam()
    {
    }
    void setExamName(string examName)
    {
        this->examName=examName;
    }
    void setCouseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setExamDate(string examDate)
    {
        this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getExamDate()
    {
        return examDate;
    }
    void print ()
    {
        cout<<"The ExamName Is : "<<examName<<endl;
        cout<<"The CourseCode Is : "<<courseCode<<endl;
        cout<<"The ExamDate Is : "<<examDate<<endl;
    }


};

#endif // EXAM_H
