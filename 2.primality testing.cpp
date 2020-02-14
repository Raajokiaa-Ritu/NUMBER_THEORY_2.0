#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
  for (long long i=3;i*i<=n;i=i+2)
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
    int n,i;
    cin>>n;
    for(i=1;i<n;i=i+2)
    {
        if(isPrime(i) == true)
            cout<<i<<' ';
    }

}
