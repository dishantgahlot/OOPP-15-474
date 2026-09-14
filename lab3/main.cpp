#include <bits/stdc++.h>
using namespace std;
int main(){


  vector<int> numbers = {1,2,3,4,5,5,6,7};

  // auto based traserve on collection

  for(auto i : numbers){

    cout<<i<<" ";
  }

  cout<<endl;

  for(int i = 0 ; i<numbers.size() ; i++){

     cout<<numbers[i]<<" ";

  }


    return 0;
}