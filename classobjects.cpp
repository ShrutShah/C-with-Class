#include<iostream>

using namespace std;

class complex{
		int a,b;
    public:
    	void setData(int v1, int v2){
        	a = v1;
            b = v2;
        
        }
        
        void setDatabyadd(complex v1, complex v2){
        
        	a = v1.a + v2.a;
            b = v1.b + v2.b;
        }

		void getData(){
        	cout<<"a: "<<a<<"b: "<<b;
        
        }
};

int main(){
	complex c1, c2, c3;
    c1.setData(1,2);
    c1.getData();
    c2.setData(3,4);
    c2.getData();
    c3.setDatabyadd(c1,c2);
    c3.getData();

}
