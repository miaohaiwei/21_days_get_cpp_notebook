//
// Created by mhw on 18-11-21.
//

#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


class MyString
{
    //构造函数
private:
    char * buffer;

public:
    MyString(const char * str)
    {
        cout << "constructor function" << endl;
        buffer = NULL;
        if(str != NULL)
        {
            int str_length = strlen(str);
            buffer = new char[str_length+1];
            strcpy(buffer,str);
        }
    }


    //复制构造函数
    MyString(MyString& copy_string)
    {
        // 将copy_string的buffer给 当前对象的buffer
        buffer = NULL;
        if(copy_string.buffer!=NULL)
        {
            cout<< "copy constructer " << copy_string.GetString() << endl;
            buffer = new char[strlen(copy_string.GetString())+1];
            strcpy(buffer,copy_string.GetString());
        }
    }

    ~MyString()
    {
        cout << "destructor function";
        delete [] buffer;
    }

    const char * GetString()
    {
        return buffer;
    }
};


void useString(MyString str)
{
    cout<< str.GetString() << endl;
    return;
}

int main()
{
    MyString ss("hello");
    useString(ss);
    cout << ss.GetString() <<endl;
    return 0;

}

