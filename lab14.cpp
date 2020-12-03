#include<iostream>

using namespace std;

template<typename nayaType>
void print(nayaType x){
    cout<<x<<endl;
    }

template<typename abc>
void sum(abc x,abc y){
    cout<<x+y<<endl;
}




int main()
{
    sum(2,2);
    sum(2.3,2.4);
    
    return 0;
}
