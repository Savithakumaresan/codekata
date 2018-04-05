#include <iostream>

using namespace std;
int main()
{
  int a,b,s;
  cout<<"Enter the input";
  cin>>a;
  cin>>b;
  cin>>s;
  if(a>b&&a>s)
  {
      cout<<"a is biggest number"<<endl;
      cout<<"A="<<a;
  }
  else if(b>s)
  {
      cout<<" b is biggest number"<<endl;
      cout<<"A="<<b;
  }
  else
  {
      cout<<"s is biggest number"<<endl;
      cout<<"A="<<s<<endl;
  }
}
