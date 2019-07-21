#include <iostream>
#include <string>

#include "brown_employee.h"


using namespace std;

int main()
{
    int count;
    Employee empArray[count];
    string fname1;
    string lname1;
    int id1;
    double rate1;
    string street1;
    string city1;
    string state1;
    string zip1;

    cout << "Enter how many employee you are entering information for : ";
    cin >> count;
    cout<< endl;

for(int i = 0; i < count; i++)
{
    cout << "Enter the employee Id # : ";
    cin >> id1;
    empArray[i].setId(id1);

    cout << "Enter the employee's first name : ";
    cin>>fname1;
    empArray[i].setFirstName(fname1);

    cout << "Enter the employee's last name : ";
    cin>>lname1;
    empArray[i].setLastName(lname1);

    cout << "Enter the employee's pay rate : ";
    cin >>rate1;
    empArray[i].setRate(rate1);
    cout<<endl;
//-------------------------------------
//Address information taken

    cout << "Enter the employee's street address : ";
    cin >> street1;
    //cin.ignore('');
    empArray[i].adrs.setStreet(street1);
        cout<<endl;
    cout << "Enter the employee's city : ";
    cin >> city1;
     empArray[i].adrs.setCity(city1);
        cout<<endl;
    cout << "Enter the employee's state : ";
        cin >> state1;
    empArray[i].adrs.setState(state1);
		cout<<endl;
    cout << "Enter the employee's zip code : ";
    cin >>zip1;
    empArray[i].adrs.setZip(zip1);

    cout<<endl;
}
for(int i = 0; i < count; i++)
  {
    cout << "Employee Id # "<< empArray[i].getId()<<"\n";
    cout << "Employee's Name :"<< empArray[i].empFullName()<<"\n";
    cout << "Employee's Pay Rate :"<< empArray[i].getRate()<<"\n";
    cout << "Employee's Address is :"<< empArray[i].adrs.fullAddress();

    cout <<endl;
  }

//system("PAUSE");
}
