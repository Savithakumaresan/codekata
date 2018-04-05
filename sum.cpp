#include <iostream>

using namespace std;
class Sum
{
    private:
    int n,a,b[100],j,sum=0;
    public:
    void get()
    {
        cout<<"enter your number";
        cin>>n;
        cin>>a;
        for(j=0;j<n;j++)
        {
            cin>>b[j];
        }
    }
    void display()
    {
        for(j=0;j<a;j++)
        {
            sum=sum+b[j];
        }
        cout<<"The answer is: "<<sum;
    }
};

int main()
{
  Sum s;
  s.get();
  s.display();
}
