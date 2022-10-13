#include<iostream>
using namespace std;
class Area{
    private:
    int l,b,s,r;
    public:
    void rectangleSetData(int x,int y){ l=x; b=y;}
    void squareSetData(int z){ s=z;}
    void circleSetData(int a){ r=a;}
    void rectangleGetData(){ cout<<l*b<<endl;}
    void squareGetData(){ cout<<s*s<<endl;}
    void circleGetData(){ cout<<3.14*r*r<<endl;}
};
int main(){
    Area a1;
    a1.rectangleSetData(3,9);
    a1.squareSetData(5);
    a1.circleSetData(7);
    a1.rectangleGetData();
    a1.squareGetData();
    a1.circleGetData();
    return 0;
}