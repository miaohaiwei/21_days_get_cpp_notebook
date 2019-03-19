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
    void displaya()
    {
        cout << year << "-" << month << "-" << day <<endl;
    }
};


int main()
{
    Data * holiday = new Data(2018, 12,25);
    stringstream convertStream;

    string holiday_string(*(holiday));//这里string构造函数可以接受一个const char*的类型，这里holiday可以转换
    holiday_string = Data(2018,23,27);//这两行都是隐式的类型转换方式 可以加上explicit来确保不会隐转化
    cout << "holiday_string = " << holiday_string << endl;
    cout << *(holiday) << endl;

}
