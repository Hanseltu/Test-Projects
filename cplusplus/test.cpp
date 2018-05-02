#include<iostream>

using namespace std;

class A{};

class B:public A{};

class C{};

int main()
{
    B b;
    A& a1 = b;

    //向上转型，把子类类型转换为父类类型
    B& anoter_b = static_cast<B&>(a1);
    cout << "Hello"<< endl;
    return 0;
}
