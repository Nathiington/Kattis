#include<iostream>
using namespace std;

int main()
{
int N,X,Y;
cin >> N,X,Y;
for(int a; a<=N;a++)
{
  if(N%X==1)
    cout << "fizz";
  else if(N%Y==1)
    cout << "buzz";
  else
    cout << N;
}
return 0;
}
