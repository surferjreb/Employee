#include <iostream>
#include <string>


using namespace std;

class Address
{
  private:
         string street;
         string city;
         string state;
         string zip;
  public:
         Address()
         {
         }
//------------------------------
         Address(string a1, string b1, string c1, string d1)
         {
           setStreet(a1);
           setCity(b1);
           setState(c1);
           setZip(d1);
         }
//--------------------------------
         void setStreet(string a)
         {
           street = a;
         }
         string getStreet()
         {
           return street;
         }
//---------------------------------
         void setCity(string b)
         {
           city = b;
         }
         string getCity()
         {
           return city;
         }
//----------------------------------
         void setState(string c)
         {
           state = c;
         }
         string getState()
         {
           return state;
         }
//-----------------------------------
         void setZip(string d)
         {
           zip = d;
         }
         string getZip()
         {
           return zip;
         }
//-----------------------------------
         string fullAddress()
        {
            return getStreet() + " " + getCity() + "," + getState() +" " + getZip() + "\n";
        }

};
