#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  //LOOP TO PRINT MULTIPLE ROWS
  for(int row = 0;row < n;row++){
    //WORK OF ONE ROW

    //LOOP TO PRINT MULTIPLE COLUMNS
    for(int col = 0;col<=row;col++){
      cout<<"1 ";
    }
    cout<<endl;
  }
}
