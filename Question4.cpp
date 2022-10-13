#include<iostream>
using namespace std;
class LargestNumber{
    private:
      int x,y,z;
    public:
    void setData(int a, int b,int c){
        x=a; y=b; z=c;
    }
    void getData(){
         int max1,max;
         max1 = x>=y?x:y;
         max = max1>=z?max1:z;
         cout<<"The maximum of "<<x<<" "<<y<<" "<<"& "<<z<<" is "<<max<<endl;

    }
};
int main(){
    LargestNumber l1,l2;
    l1.setData(3,9,7);
    l1.getData();
    l2.setData(77,199,1999);
    l2.getData();
    return 0;
}