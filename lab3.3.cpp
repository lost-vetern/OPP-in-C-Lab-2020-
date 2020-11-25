#include<iostream>
using namespace std;

class car{
    float enginesize;
    string brandName;

    public:

    car(){
        cout<<"this is constructor"<<endl;
    }

    void set_car(float esize, string bname){
        brandName = bname;
        enginesize =esize;
    }
    
    void get_car(){
        cout<<brandName<<"  with "<<enginesize;
    }

    ~car(){
        cout<<"this is destructor";
    }

};

int main()
{
    car honda;
    honda.set_car(1.5,"civic");
    honda.get_car();

    return 0;
}
