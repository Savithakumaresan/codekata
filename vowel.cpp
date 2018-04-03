#include <iostream>

using namespace std;
int main()
{
  char b;
  cout<<"Enter the input";
  cin>>b;
  if( b=='a'|| b=='e'|| b=='i'|| b== 'o'|| b=='u'||
  b == 'A'||b== 'E'||b =='I'||b == 'O'||b =='U')
  {
      cout<<"it is vowel";
  }
  else if((b >= 'a'&& b<='z') || (b>='A'&& b<='Z'))
  {
      cout<<"It is consonant";
  }
  else
  {
      cout<<"Enter only alphabet letters";
  }
}
