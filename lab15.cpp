#include<iostream>

using namespace std;

class math{
    public:
    virtual void sum(int x,int y)=0;
    virtual void sub(int x,int y)=0;
};

class test:public math{
    public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sub(int a,int b){
        cout<<a-b<<endl;
    }
};

int main(int argc, char const *argv[])
{
    test t;
    t.sub(4,2);
    return 0;
}
