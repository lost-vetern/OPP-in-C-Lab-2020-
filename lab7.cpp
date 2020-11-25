#include <iostream>

using namespace std;

class parent{
    protected:
    int x;

    void taste()
    {
        cout<<"hi i am taste";
    }

};

class child : public parent
{
    public:
    void set(){
        x=4;
    }
    void get(){
        cout<<x;
    }
  
};

int main(int argc, char const *argv[])
{
    child obj;

    obj.set();
    obj.get();
    
    
    
    return 0;
}
