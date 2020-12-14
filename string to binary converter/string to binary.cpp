#include <string>
#include <bitset>
#include <iostream>
using namespace std;
int main(){
  string myString;
  cout<<"Enter your string : ";
  cin>>myString;
  for (int i = 0; i <myString.size(); ++i)
  {
      cout << bitset<8>(myString.c_str()[i]) << endl;
  }
  return 0;
}
