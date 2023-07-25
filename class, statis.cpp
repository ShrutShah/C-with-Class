#include <iostream>
using namespace std;

class example{
  static int count;
  private:
  int a, b, c;
  public:
  int d, e;
  
  void get_data(int a1, int b1, int c1){
      a = a1;
      b = b1;
      c = c1;
     cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl; 
     count++;
     cout<<"count: "<<count<<endl;
    
  }
};

// by default value is 0 for static variables;

int example:: count;
int main() {
    example e1,e2;
    e1.d = 6;
    cout<<"d: "<<e1.d<<endl;
    e1.get_data(1,2,3);
    cout<<endl;
    
    e2.d = 6;
    cout<<"d: "<<e2.d<<endl;
    e2.get_data(1,2,3);
    
    return 0;
}
