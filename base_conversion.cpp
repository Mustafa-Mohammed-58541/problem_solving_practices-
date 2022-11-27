#include <iostream>
 
using namespace std;
void bin(int x);
int main()
{ int n; int t;
cin >> t;
while (t-->0)
  {std::cin >> n;
    bin(n);
      cout<<endl;
  }
    return 0;
}
void bin (int x)
{  int mod;
    
    if(x > 0 )
{   
    mod= x%2;
    x=x/2;
    bin(x);
    cout <<mod;
 
    
}
 
}
