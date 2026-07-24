#include <bits/stdc++.h>
using namespace std;


void swapByValue(int a , int b){

     cout<<"Swap by value : "<<"\n";
    cout<<"int x :"<<a<<" "<<" int y : "<<b<<"\n";
    
    int temp = a;
    a = b ;
    b = temp;

    cout<<"After Swapped : ";
    cout<<"int x :"<<a<<" "<<" int y : "<<b<<"\n";

   

}

void swapByAddress(int &a , int &b){

     cout<<"Swap by Address : "<<"\n";
    cout<<"int x :"<<a<<" "<<" int y : "<<b<<endl;
    
    int temp = a;
    a = b ;
    b = temp;

    cout<<"After Swapped : ";
    cout<<"int x :"<<a<<" "<<" int y : "<<b<<endl;

   

}

void swapByrefernece(int* a , int* b){

    cout<<"Swap by reference : "<<"\n";
    cout<<"int x :"<<*a<<" "<<" int y : "<<*b<<endl;
    
    int temp = *a;
    *a = *b ;
    *b = temp;

    cout<<"After Swapped : ";
    cout<<"int x :"<<*a<<" "<<" int y : "<<*b<<endl;

   

}

int main(){

    int a = 10;
    int b = 20;

    swapByValue(a,b);
    cout<<"\n";
    swapByAddress(a,b);
    cout<<"\n";
    swapByrefernece(&a,&b);

    return 0;
}