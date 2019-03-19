//
// Created by mhw on 18-12-9.
//
#include <iostream>
using namespace std;

class Data
{
private:
    int year, month, day;
public:
    Data(int year_, int month_, int day_):
            year(year_),month(month_),day(day_){}

    Data& operator ++ ()
    {
        ++day;
        return *this;
    }
    Data& operator -- ()
    {
//        cout << "这里是 前缀-- 运算符重载函数" << endl;
        --day;
        return *this;
    }
    Data operator ++ (int)
    {
        Data copy(year,month,day);
        day++;
        return copy;
    }
    Data operator -- (int)
    {
        Data copy(year, month, day);
        day--;
        return copy;
    }
    void displaya()
    {
        cout << year << "-" << month << "-" << day <<endl;
    }
};


int main()
{
    Data * holiday = new Data(2018, 12,25);
    holiday->displaya();

    --(*holiday);
    holiday->displaya();

    ++(*holiday);
    holiday->displaya();

    (*holiday)++;
    holiday->displaya();

    (*holiday)--;
    holiday->displaya();


}