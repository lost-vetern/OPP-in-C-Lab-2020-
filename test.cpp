// Example program
#include <iostream>
#include <string>

using namespace std;
class abc{
	private:
		int *a;
		int index=0;
	public:
	abc(){
		a=new int[10];
	}
		friend void function(abc &ab);
		friend void print(abc &jkl);
};

void print(abc &xyz){
			for(int i=0;i<=xyz.index;i++){
				cout<<"";
			}
		}
void function(abc &ab){
		if(ab.index==9){cout<<"the tray is full"; return;}
		cout<<"give me some value for a ";
		cin>>ab.a[ab.index++];
	}
	
int main()
{	
	abc obj;
	function(obj);
	print(obj);
	return 0;
}
