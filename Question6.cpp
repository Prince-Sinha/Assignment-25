#include<iostream>
using namespace std;
class Square{
    private:
    int x,b=0;
    public:
    void setData(int a){
        x=a;
        b++;
    }
    void getData(){
        b++;
        cout<<x*x<<endl;
        cout<<"Number of times fuction is called is "<<b<<endl;

    }
};
int main(){
    Square s1,s2;
    
    return 0;
}