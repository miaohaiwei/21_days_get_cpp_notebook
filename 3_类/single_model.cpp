//
// Created by mhw on 18-11-22.
//


//只允许这个类创建一个对象（单例模式），需要满足一下三条
//1.私有化构造函数
//2.私有化复制构造函数　私有化复制构造函数
//3.使用静态实例（包括静态实例、静态获取实例的方法）
#include <string>
#include <iostream>

using namespace std;

class President
{
private:
    President(){}
    President(President& president){}
    const President&operator=(const President&){}
    string name;

public:

    static President& GetInstance()
    {
        static President onlyInstace;
        return onlyInstace;

    }

    void SetName(string name){
        this->name=name;
    }

    string GetName(){
        return name;
    }
};


int main()
{
    President& p = President::GetInstance();
    p.SetName("miaohaiwe");
    cout << p.GetName() << endl;
}
