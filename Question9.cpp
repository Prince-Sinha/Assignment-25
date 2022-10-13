#include<iostream>
using namespace std;
class circle{
    private:
    int l,b;
    public:
    void setData(int x,int y){ l=x; b=y;}
    void getData(){ cout<<l*b<<endl;}
};
int main(){
    circle c1,c2;
    c1.setData(3,9);
    c1.getData();
    c2.setData(77,2);
    c2.getData();
    return 0;
}