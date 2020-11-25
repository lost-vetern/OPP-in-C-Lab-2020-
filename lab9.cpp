#include<iostream>

using namespace std;

class fruit{
    public:
    virtual void taste(){
        cout<<"its sweet\n";
    }
};

class apple:public fruit{
    public:
    void taste(){
        cout<<"its apple's taste\n";
    }
};

class strawberry:public fruit{
    public:
    void taste(){
        cout<<"its strawberry's taste\n";
    }
};

int main()
{
    apple a;    
    strawberry s;
    fruit *f;
    f=&s;
    f->taste();
    f=&a;
    f->taste();
    return 0;
}
