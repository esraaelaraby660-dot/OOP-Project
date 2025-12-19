#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;

class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Classroom()
    {
    }
    Classroom(int roomNumber,int capacity)
    {
        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    ~Classroom()
    {
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void print()
    {
        cout<<"The RoomNumber Is : "<<roomNumber<<endl;
        cout<<"The Capacity Is : "<<capacity<<endl;
    }
    void information()
    {
        cout<<"Please Enter Your RoomNumber: "<<endl;
        cin>>roomNumber;
        cout<<"Please Enter Your Capacity: "<<endl;
        cin>>capacity;
         cout<<"The Class Room Is Added Successfully\n";
    }



};

#endif // CLASSROOM_H
