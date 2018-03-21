#include <iostream>

using namespace std;
int main()
{
  int b;
  cout<<"Enter your number";
  cin>>b;
  if(b>=1&&b<=100000)
  {
  if(b>0)
  {
      cout<<"It is positive";
}
else
{
    cout<<"It is negative or It may be 0";
}
}
else
{
    cout<<"It is greater than 100000& all are will be positive";
}


    return 0;
}

