#include<iostream>
using namespace std;
class complexNumber{
    private:
    int r,i;
    public:
    void setData(int x, int y){
    r=x;i=y;}
    void getData(){
        if(i>=0)
          cout<<r<<" + "<<i<<"i"<<endl;
        else{
            i=-i;
            cout<<r<<" - "<<i<<"i"<<endl;
        }
    }
     
};
int main(){
    complexNumber c1,c2;
    c1.setData(2,4);
    c2.setData(5,-4);
    c1.getData();
    c2.getData();
    
    return 0;
}