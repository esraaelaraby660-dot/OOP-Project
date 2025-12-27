#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;

class PhoneNumber
{
private:
       string phoneNumber;
       string type;
public:
    PhoneNumber()
    {
    }
    PhoneNumber(string phoneNumber,string type)
    {
        this ->phoneNumber=phoneNumber;
        this->type=type;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getType()
    {
        return type;
    }
    void print ()
    {
        cout<<"The Phone Number Is :"<<phoneNumber<<endl;
        cout<<"The Type Of Phone Number Is :"<<type<<endl;
    }
    void information()
    {
        cout<<"Please Enter Your Phone Number \n";
        cin>>phoneNumber;
        cout<<"Please Enter The Type Of Phone Number ( Work , Home ,Mobile )  \n";
        cin>>type;


    }

    virtual ~PhoneNumber() {}




};

#endif // PHONENUMBER_H
