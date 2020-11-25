#include<iostream>

using namespace std;

class counter{
    static int count;
    public:
    void counter_init(){
        count=0;
    }  
    void get_count(){
        cout<<count<<endl;
    }
    void increment(){
        count++;
    }
};

int counter::count;

int main()
{   
    counter c1,c2,c3;
    c1.counter_init();
    
    c1.get_count();
    
    c1.increment();
    c2.increment();
    c3.increment();
    
    c1.get_count();
    return 0;
}
