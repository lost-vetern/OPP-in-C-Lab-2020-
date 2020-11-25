#include<iostream>
using namespace std;

class pen{
    string *color;
    public:
    pen(){
        color=new string[3];
    }
    void setterwalafunction(string str[]){
        color[0]=str[0];
        color[1]=str[1];
        color[2]=str[2];

    }
    void getterfunction(){
        cout<<color[0]<<endl;
        //cout<<*(color+sizeof(string));
    }
    ~pen(){
        delete[] color;
    }
};


int main()
 {  
    pen dollar;
    dollar.setterwalafunction(abc);
    dollar.getterfunction();
    return 0;
}
