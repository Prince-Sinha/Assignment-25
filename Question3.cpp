#include<iostream>
using namespace std;
class factorial{
    int n,f=1;
    public:
    void input(int x){n=x;}
    void display(){
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        cout<<f<<endl;
    }
     
};
int main(){
    factorial f1,f2;
    f1.input(5);
    f1.display();
    f2.input(6);
    f2.display();
    return 0;
}