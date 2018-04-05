#include <iostream>

using namespace std;
int main()
{
  int b;
  cout<<"Enter the input";
  cin>>b;
  if(b>=1000)
  {
  if(b%4==0)                                     
  {
cout<<"It is leap year";
}
else
{
    cout<<"It is not leap year";
}
}
else
{
    cout<<"Enter the input greater than 1000 only";
}
}
