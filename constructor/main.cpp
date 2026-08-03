#include <bits/stdc++.h>
using namespace std;

class point{

    private :

    int x ,y;

    public :

    point(){
                   // list initialiser point():x{0},y{0}{}

        x = 0 ;
        y = 0;
    }

    point(int x , int y){   // point(int a , int b ):x{p},y{p}{}

        this->x = x;
        this->y = y;

    }

    void show(){

        cout<<x<<" "<<y;
    }
};

int main(){


 point p ;

 p.show();

 cout<<"\n";

 point p1(1,2);
 p1.show();



    return 0;



}


