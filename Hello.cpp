#include <iostream>

using namespace std;
class Hello
{
    private :
    int j,n;
    public :
    void print()
    {
      cout<<"enter your number"<<endl;
     cin>>n;
     if(n>0)
     {
       for(j=0;j<n;j++) 
       {
           cout<<"hello"<<endl;
       }
     }
     else
     {
         cout<<"Enter the input greater than zero";
     }
    }
};

int main()
{
  Hello h;
  h.print();
}
