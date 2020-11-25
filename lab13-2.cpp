#include <iostream>

using namespace std;

class area{
    int a;
    public:
    area(int a2){a=a2;}
    
    void operator++(){
        a--;
    }   

    void print(){
        cout<<a;
    }
};

int main()
{
    area room1(40);
    
    room1.print();
    return 0;
}
