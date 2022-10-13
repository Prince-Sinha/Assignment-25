#include<iostream>
using namespace std;
class Rectangle{
    private:
    int l,b;
    public:
    void setData(int x,int y){ l=x; b=y;}
    void getData(){ cout<<l*b<<endl;}
};
int main(){
    Rectangle r1,r2;
    r1.setData(3,9);
    r1.getData();
    r2.setData(77,2);
    r2.getData();
    return 0;
}