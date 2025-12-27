#include <iostream>
#include<PhoneNumber.h>
#include<Contact.h>
#include<ContactBook.h>
using namespace std;

int main()
{
    int n;
    int ID;
    Contact c;
    ContactBook cb;
    do
    {
        cout<<"Press 0 To Exit The Program"<<endl;



        cout<<"Press 1 To Add New Contact "<<endl;


        cout<<"Press 2 To Delete a Contact"<<endl;


        cout<<"Press 3 To Search for a Contact "<<endl;


        cout<<"Press 4 To Edit To a Contact"<<endl;


        cout<<"Press 5 To Print All Contacts "<<endl;

        cout<<"Press 6 To Count Of Contact In Contact Book "<<endl;

        cin>>n;


        system("cls");

             switch(n)

    {    case 0:
               return 0;

        case 1:


            {
                cout<<"Enter Contact Data To Add New Contact\n";
                c.information();
                cb.addContact(c);
                break;
             }
          case 2:
              {
                  cout<<"Enter Contact ID To Delete a Contact\n";
                  cin>>ID;
                  cb.deleteContact(ID);
                  cout<<"The Contact  Delete Successflly\n";
                  break;
              }
          case 3:
            {

                cout<<"Enter Contact ID To Search for a Contact\n";
                cin>>ID;
                cb.searchContact(ID);
                break;
            }
          case 4:
            {

                cout<<"Enter Contact ID To Edit Contact\n";
                cin>>ID;
                cb.editContact(ID);
                break;
            }
          case 5:
            {
                 cout<<"Enter Contact Data To Print All Contacts \n";
                 cb.displayAllContacts();
                 break;
            }

             case 6:
            {

            cout<<"Press 6 To Know  Count Of Contact In Contact Book "<<endl;
            cb.countContact();
            break;
            }

    }
    } while(n!=0);




    return 0;
}
