#include <iostream>

using namespace std;
class Sum
{
    private :
    int j,n,sum=0;
    public :
    void display()
    {
      cout<<"enter your number"<<endl;
     cin>>n;
     for(j=1;j<=n;j++) 
       {
          sum=sum+j; 
        
       }
      cout<<sum<<endl;
    }
};

int main()
{
  Sum s;
  s.display();
}
