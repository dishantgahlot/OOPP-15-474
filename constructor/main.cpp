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

    void  add(point p ,point q){

        x = p.x+q.x;
        y = p.y+q.y;

    }
};

int main(){


 point p(20,50), q(20,50);
 
 point r;

 r.add(p,q);
 r.show();






    return 0;



}


