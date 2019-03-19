//
// Created by mhw on 18-11-21.
//

#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

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

    // MyString(int a)
    // {
    //     cout << "这是 int 接收的构造函数" << endl;
    //     stringstream convertsteam;
    //     convertsteam << a;
    //     strcpy(buffer,convertsteam.str().c_str());
    // }

    // MyString(string s)
    // {
    //     cout << "这是 s 接收的构造函数" << endl;
    //     stringstream convertsteam;
    //     convertsteam << s;
    //     strcpy(buffer,convertsteam.str().c_str());
    // }

    //复制构造函数 可以实现MyString到MyString的转换
   MyString(MyString& copy_string)
   {
       // 将copy_string的buffer给 当前对象的buffer
       cout << "这是Mystring的复制构造函数"  << endl;
       buffer = NULL;
       if(copy_string.buffer!=NULL)
       {
           //cout<< "copy constructer " << copy_string.GetString() << endl;
           buffer = new char[strlen(copy_string.GetString())+1];
           strcpy(buffer,copy_string.GetString());
       }
   }

   MyString& operator = (const MyString& copySource)
   {
       cout << "这是复制赋值运算符operator= " << endl;
       if ( this!= &copySource && copySource.buffer!= NULL)
       {
           if(buffer!=NULL)
               delete[] buffer;
           buffer = new char[strlen(copySource.buffer) + 1];
           strcpy(buffer, copySource.buffer);
       }
       return *this;
   }
    operator const char *()
    {        
        return buffer;
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
    // useString(intt);
    // MyString s = 77;

   cout << ss.GetString() <<endl;

   cout << "-----------------------------" << endl;

   MyString ss1("123");
   MyString ss2("");
   ss2 = ss1;
   cout << "ss1.buffer = " << ss1 << endl;
   cout << "ss2.buffer = " << ss2 << endl;

    return 0;

}

