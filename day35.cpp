#include <iostream>
using namespace std;
class num{
     int count;
    public: 
      num(int a){
        count=a;
        count++;
        cout<<"constructor is called for: "<<count<<endl;
      }
      num(num &o){
        count=o.count;
        count++;
        cout<<"constructor is called for: "<<count<<endl;
      }
      ~num(){
        cout<<"destructor is called for: "<<count<<endl;
        count--;
      }
};
int main() {
    cout<<"we are in our main function"<<endl;
  num n1(0);{
     cout<<"entering the block"<<endl;
     num n2=n1;
     num n3(n2);
     cout<<"exiting the block"<<endl;
  } 
  cout<<"back to main"<<endl;
    return 0;
}