#include<iostream>

using namespace std;

class car{
    int es;
    int tax;
    public:
    car(int e){
        es=e;
    }
    
    void print(){
        cout<<"es"<<es<<"\ntax"<<tax;
    }

    friend void tax_calculator(car &c);

};

//friend function
void tax_calculator(car &c){
    c.tax=c.es*10;
}

int main(int argc, char const *argv[])
{
    car abc(2000);
    tax_calculator(abc);
    abc.print();
    return 0;
}
