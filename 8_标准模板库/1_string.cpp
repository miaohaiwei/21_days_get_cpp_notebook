#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    //一、string的几种创建形式------------------------------

    //1.从c风格的const char * 创建 和 复制
    const char * constCharString = "hello1";
    string str1(constCharString);
    cout << str1 << endl;
    string str2 = constCharString;
    
    //2.从string 创建和复制
    string str3 = str2;
    string str4(str2);
    cout << str3 << endl;
    cout << str4 << endl;

    //3.只使用string的一部分
    string str5(constCharString,2);
    //4.重复某个字符几遍的创建
    string str6(10, 'a');

    cout << str5 << endl;
    cout << str6 << endl;
    cout << "-----------------------------------------------" << endl;
    //二、访问字符串
    // []访问
    string stra = "abcdefg";
    for( int i =0; i< stra.length(); i++)
    {
        cout << stra[i] << endl;
        
    }
    cout << endl;
    auto stringIter = stra.begin();
    while(stringIter != stra.end())
    {
        cout << *stringIter << endl;
        stringIter++;
    }
    cout << "-----------------------------------------------" << endl;
    
    //二、拼接字符串
    //两种方式：1.+= 2.append
    string strb1 = "hello";
    string strb2 = " string";
    string res1 = "";
    string res2 = "";
    res1 = strb1;
    res1 += strb2;
    res2.append(strb2);
    res2.append(strb1);
    cout << res1 << endl;
    cout << res2 << endl;
    cout << "-----------------------------------------------" << endl;    

    //三、查找字符或子字符串
    string strc("I will find you!");
    auto pos = strc.find("you",0);
    if(pos == -1)
    {
        cout << "未找到" << endl;
    }else{
        cout << "pos =" << pos << endl; 
    }
    cout << "-----------------------------------------------" << endl;
    //四、截断string
    //erase 有三种使用方式：1索引范围，2一个迭代器值 3迭代器范围
    string strd1("I will find you!");
    strd1.erase(1,strd1.length()-1);
    cout << strd1 << endl;
    string strd2("I will find you!");
    strd2.erase(strd2.find("you",0));
    cout << strd2 << endl;
    string strd3("I will find you!");
    strd3.erase(strd3.begin(), strd3.end());
    cout << strd3 << endl;
    cout << "-----------------------------------------------" << endl;
    //五、字符串翻转
    string stre("abcfg");
    reverse(stre.begin(), stre.end());
    cout << stre << endl;
    cout << "-----------------------------------------------" << endl;

    //六、字符串大小写转换
    transform(stre.begin(),stre.end(), stre.begin(),::toupper);
    cout << stre << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}
