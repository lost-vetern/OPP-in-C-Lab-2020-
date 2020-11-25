#include <iostream>

using namespace std;

class circle{
    int radius;

    public:
    circle(int r){radius=r;}


friend class area;

};

class area{
    int a;
    public:
    void calculateArea(circle c2){
        cout<<"area= "<<2*(22/7)*c2.radius;
    }
};

int main()
{
    circle c(4);
    area a;
    a.calculateArea(c);
    
    return 0;
}
