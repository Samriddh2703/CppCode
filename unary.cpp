#include<iostream>

using namespace std;

class space{

    int x,y,z;

    public:
    void getdata(int a , int b , int c){
        x=a;y=b;z=c;
    };
    void display(void){
        cout<<x<<" "<<y<<" "<<z<<endl;
    };
    space operator-(){
        space s;
        s.x = -x;
        s.y = -y;
        s.z = -z;
        return s;
    }
};
    int main(){

        space S;
        S.getdata(10,-20,30);
        S.display();

        space S1;
        S1= -S;
        S1.display();
        S.display();
        return 0;
    }


