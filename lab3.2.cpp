#include<iostream>

using namespace std;

void function(){
    static int x=0;
    x++;
    cout<<x<<",";
}

int main()
{   
    function();
    function();
    function();
    function();
    
    return 0;
}
