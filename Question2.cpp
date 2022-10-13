#include<iostream>
using namespace std;
class Time{
    private:
    int hr , min , sec;
    public:
    void setTime(int x, int y, int z){
        hr=x; min=y;sec=z;
    }
    void Display(){
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    }
};
int main(){
    Time t1,t2;
    t1.setTime(3,45,20);
    t2.setTime(4,15,10);
    t1.Display();
    t2.Display();

    return 0;
}