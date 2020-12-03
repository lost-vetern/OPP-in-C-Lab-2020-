#include<iostream>
using namespace std;


template<typename newtype>
class test{
    public:
    void print(newtype a){
        cout<<a<<endl;
    }
};

int main(int argc, char const *argv[])
{
    test<int> t1;
    test<string> t2;
    
    t1.print(2);
    
    t2.print("abc");

       return 0;
}
