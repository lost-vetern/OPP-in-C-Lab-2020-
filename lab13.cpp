#include <iostream>

using namespace std;

class area{
    int a;
    public:
    area(int a2){a=a2;}
    
    area operator+(area var1){
        int temp;
        temp=a+var1.a;
        return area(temp);
    }
    void print(){
        cout<<a;
    }
};

int main()
{
    area room1(40);
    area room2(50);
    area room3(50);
    
    area total(0);
    total=room1+room2+room3;
    total.print();
    return 0;
}
