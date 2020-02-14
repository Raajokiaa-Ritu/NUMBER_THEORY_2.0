#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
  if (n < 2)
      return false;
  for (long long i=2;i*i<=n;i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
    int n;
    bool x;
    cin>>n;
    x = isPrime(n);
    if(x==1)
        cout<<"yes,prime";
    else
        cout<<"not prime";
}
