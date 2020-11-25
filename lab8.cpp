#include<iostream>
using namespace std;

class a{
    public:
    int x;};

class b:virtual public a{};

class c:virtual public a{};

class d:public b,public c{};

int main(int argc, char const *argv[])
{
    d object;
    object.x=10;
    return 0;
}
