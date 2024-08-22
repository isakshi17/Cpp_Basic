// print whether the input is in uppercase,lowercase or numerics
#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"Enter the character\n";
  cin>>ch;
  if (ch >= 'a' && ch <= 'z') {
    cout << "The character is in lowercase\n";
  } else if (ch >= 'A' && ch <= 'Z') {
    cout << "The character is Uppercase\n";
  } else {
    cout << "The character is Numeric\n";
  }
}
