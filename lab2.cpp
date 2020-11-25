#include <iostream>

using namespace std;

class student
{   
    int gpa;
    
    public:
    void calculate_gpa(){
        gpa=10*10/3;
    }
    void get_gpa(){
        cout<<gpa;
    }
};


int main(){
    student abc;
    abc.calculate_gpa();
    abc.get_gpa();
    return 0;


}