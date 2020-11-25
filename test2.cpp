#include<iostream>
using namespace std;

class fruit{
    int a;
    public:
    fruit(){a=0;}
    fruit(int f){a=f;}
    void print(){cout<<a<<endl;}
    fruit operator+(fruit f){
        int x=a+f.a;
        return fruit(x);
    }
};


int main()
{   
    fruit f(2);
    fruit f2(2);
    fruit f3(2);
    
    fruit f4(2);
    f=f+f2+f4;
    // f=f+f3;
    f.print();
    return 0;
}
