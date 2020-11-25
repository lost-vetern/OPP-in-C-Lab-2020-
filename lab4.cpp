#include<iostream>

using namespace std;

class car{
    public:
    float es;
    string name;

    car(){
        cout<<"default constructor";
    }   

    car(float e,string str){
        es=e;
        name=str;
    }

    car(car &variable){
        es=variable.es;
        name=variable.name;
    }

    void print(){
        cout<<"name "<<name<<" engine "<<es;
    }


};



int main()
{ 
    car honda(1.8,"civic");
    car corolla(honda);

    corolla.print();
    return 0;
}



