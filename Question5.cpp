#include<iostream>
#include <cmath>
using namespace std;
class ReverseNumber{
      private:
        int x;
      public:
      void setData(int a){ x=a; }
      void getData(){
        int sum=0,count=0,n=x;
        for(int i=0;n>=1;i++){n=n/10;
          count++; 
        }
        for(int j=count-1;j>=0;j++){
        int a=x%10;
        x=x/10;
        sum=sum+a*pow(10,j);      
        }
        cout<<sum<<endl;
      }
};
int main(){
    ReverseNumber r1,r2;
    r1.setData(223);
    r1.getData();
    r2.setData(678);
    r2.getData();
    return 0;
}