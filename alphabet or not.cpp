#include <iostream>

using namespace std;

int main()
{
  char b;
  cout<<"Enter the input";
  cin>>b;
  if((b >= 'a'&& b<='z') || (b>='A'&& b<='Z'))
  {
      cout<<"it is alphabet";
  }
  else if (b>='0'&&b<='9')
  {
      cout<<"It is number";
  }
  else
  {
      cout<<" It is special character";
  }
}
