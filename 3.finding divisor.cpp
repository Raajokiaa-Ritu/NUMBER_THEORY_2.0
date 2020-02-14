///complexity o(n).this could o(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
int countDivisor(int n)
{
  int divisor = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
            cout<<i<<' ';
      divisor++;
    }
  }
  return divisor;
}
int main()
{
   int n;
   cout<<"enter a number = ";
   cin>>n;
   cout<<endl<<countDivisor(n);
}
