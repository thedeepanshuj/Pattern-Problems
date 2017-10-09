#include <iostream>
using namespace std;

int main(){
  cout<<"Enter n : ";
  int n;
  cin>>n;

  for(int row=1; row<=n; row++){
    //row-1 spaces
    for(int spaces=1; spaces<=row-1; spaces++){
      cout<<"  ";
    }

    //row
    cout<<row<<" ";

    //n-row+1 stars
    for(int col=1; col<=n-row+1; col++){
      cout<<"* ";
    }
    cout<<endl;
  }

  for(int row=n-1; row>=1; row--){
    for(int spaces=1; spaces<=row-1; spaces++){
      cout<<"  ";
    }

    cout<<row<<" ";

    for(int col=1; col<=n-row+1; col++){
      cout<<"* ";
    }
    cout<<endl;
  }


}
