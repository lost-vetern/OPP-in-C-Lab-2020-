#include <iostream>
using namespace std;

class engine{
    float enginesize;
    public:
    void setEngineSize(float es){
        enginesize=es;
    }
    void getEngineSize(){
        cout<< enginesize;
    }
};


class car{
    string brand;
    engine e;
    public:

    car(string str,engine tempE){
        brand=str;
        e=tempE;
    }
    void print(){
        cout<<brand<<" has ";
        e.getEngineSize();
        cout<<" liter engine";
    }
};


int main()
{
    engine e;
    e.setEngineSize(1.5);
    car *honda=new car("civic",e);
    honda->print();

//     abc *ptr;
//     ptr=new abc();
//     ptr->print();
    return 0;
}
