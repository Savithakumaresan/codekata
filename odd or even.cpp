#include <iostream>

using namespace std;
int main()
{
  int b;
  cout<<"Enter your number";
  cin>>b;
  if(b>=1&&b<=100000)
  {
  if(b%2==0)
  {
      cout<<"It is Even";
}
else
{
    cout<<"It is odd";
}
}
else
{
    cout<<"It is greater than 100000 Or It is less than zero";
}


    return 0;
}
