//
// Created by mhw on 18-12-10.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;


class Data
{
private:
    int year, month, day;
    string inerString;
public:
    Data(int year_, int month_, int day_):
            year(year_),month(month_),day(day_){}

    operator const char *()
    {
        ostringstream formattedData;
        formattedData << year << "/" << month << "/" << day;
        inerString = formattedData.str();
        return inerString.c_str();
    }

    Data operator + (int addInt)
    {

        return Data(year,month,day+addInt);
    }
    Data operator - (int addInt)
    {

        return Data(year,month,day-addInt);
    }

    void operator += (int addInt)
    {

        day +=addInt;
    }

    void operator -= (int addInt)
    {
        day -= addInt;
    }

    bool operator == (const Data& conpareTo)
    {
        cout << "this = " << this << endl;
        cout << "comparTo = " << &conpareTo << endl;

        return (conpareTo.day==day)
               &&(conpareTo.month==month)
                &&(conpareTo.day==day);

    }

    bool operator != (const Data& compareTo)
    {
        return !(this->operator==(compareTo));
    }

};


int main()
{
    Data  holiday(2018, 12,25);

    holiday +=4;

    Data holiday_2(2018, 12,25);
    cout << "&holiday = " << &holiday << endl;
    cout << "&holiday_2 = " << &holiday_2 << endl;
    bool a = (holiday == holiday_2);
//    holiday_2 = holiday+5;

//    cout << holiday << endl;
//    cout << holiday_2 << endl;
//    holiday +=4;
//    holiday -=2;
//    cout << holiday << endl;
//
//    Data data_3(2018, 12, 27);
//    bool a(false);
//    cout << a << endl;
//    cout << "holiday==data_3：" << (holiday==data_3) << endl;
//    cout << "holiday_2==data_3：" << holiday_2==data_3 <<endl;
}
