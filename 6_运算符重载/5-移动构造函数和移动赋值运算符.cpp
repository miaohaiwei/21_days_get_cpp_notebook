#include<iostream>
#include<string.h>

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

    //移动构造函数
    MyString(MyString&& move_string)
    {
        cout << "这是移动构造函数：" << move_string.buffer << endl;
        if(move_string.buffer != NULL)
        {
            buffer = move_string.buffer;
            move_string.buffer = NULL;
        }
       
    }

    // //移动赋值运算符
    // MyString(MyString&& move_string)
    // {
    //     cout << "这是移动构造函数：" << move_string.buffer << endl;
    //     if(move_string.buffer != NULL)
    //     {
    //         buffer = move_string.buffer;
    //         move_string.buffer = NULL;
    //     }
       
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

    //复制赋值运算符
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



int main()
{
    /* code */
    cout << "hello" << endl;
    return 0;
}
