#include <iostream>
#include <string>
#include "brown_address.h"

using namespace std;

class Employee
{
  private:
         string fname;
         string lname;
         int empid;
         double rate;

  public:
		 Address adrs;
         Employee()
         {
         }
//------------------------------
         Employee(string a1, string b1, int c1, double d1)
         {
           setFirstName(a1);
           setLastName(b1);
           setId(c1);
           setRate(d1);
         }
//--------------------------------
         void setFirstName(string a)
         {
           fname = a;
         }
         string getFirstName()
         {
           return fname;
         }
//---------------------------------
         void setLastName(string b)
         {
           lname = b;
         }
         string getLastName()
         {
           return lname;
         }
//----------------------------------
         int setId(int c)
         {
           empid = c;
         }

         int getId()
         {
           return empid;
         }
//-----------------------------------
         double setRate(double d)
         {
           rate = d;
         }
         double getRate()
         {
           return rate;
         }
//-----------------------------------
         string empFullName()
         {
          return getLastName() + "," + getFirstName();
         }
//-----------------------------------
/*        void setAddressStreet(string s)
        {
            adrs.setStreet(s);
        }
        string getAddressStreet()
        {
            return adrs.getStreet();
        }
//-------------------------------------------
        void setAddressCity(string s)
        {
            adrs.setCity(s);
        }
        string getAddressCity()
        {
            return adrs.getCity();
        }
//-------------------------------------------
          void setAddressState(string s)
        {
            adrs.setState(s);
        }
        string getAddressState()
        {
            return adrs.getState();
        }
//-------------------------------------------
        void setAddressZip(string s)
        {
            adrs.setZip(s);
        }
        string getAddressZip()
        {
            return adrs.getZip();
        }

//-------------------------------------------
         string getAddressfullAddress()
        {
         return adrs.fullAddress();
        }
*/
};
