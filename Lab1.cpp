#include <iostream>

using namespace std;



struct pixel{
    int row,col;

    void setval(int r,int c){
        row=r;
        col=c;
    }

    void getval(){
        cout<<"row "<<row<<endl;
        cout<<"col "<<col;
    }

    int getrow(){
        return row;
        
    }
};

int main(){
    pixel anyPixel;

    anyPixel.setval(2,3);
    // anyPixel.getval();

    cout<<anyPixel.getrow();
    return 0;
}