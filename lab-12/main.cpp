#include <bits/stdc++.h>
using  namespace std;

class Point{

int a ;
int b ;

public : 

Point(int a , int b):a{a},b{b}{}

void show(){
    cout<<a<<" "<<b<<endl;
}

Point operator+(const Point& other) const {

    return Point(this->a + other.a , this->b + other.b);
}




};

int main(){

Point p(12 , 6) , q(-5,7);

Point r = p+q;

p.show();
q.show();
r.show();



    return 0;
}