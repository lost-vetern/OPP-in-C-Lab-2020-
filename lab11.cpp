#include<iostream>
using namespace std;

class base{
    public:
    base(){cout<<"base constructor\n";}
    virtual ~base(){cout<<"base destructor\n";}
};

class derived:public base{
    int *i;
    public:
    derived(){
        i=new int[10]; 
        cout<<"derived constructor\n";}
    ~derived(){
        delete[] i; 
        cout<<"derived destructor\n";}
};

int main(int argc, char const *argv[])
{
    base *b;
    b=new derived();
    delete b;
    return 0;
}
