#include<iostream>

using namespace std;

class vehical{
    public:
    //pure virtual function
    void virtual definition()=0;
};

class car:public vehical{
    void definition(){
        cout<<"4 wheeler\n";
    }
};

class bike:public vehical{
    public:
    void definition(){
        cout<<"2 wheeler\n";
    }
};


int main()
{
    car c;
    bike b;
    vehical *v;
    v=&c;
    v->definition();

    v=&b;
    v->definition();
    
     return 0;
}
