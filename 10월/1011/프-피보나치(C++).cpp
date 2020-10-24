#include<iostream>
using namespace std;

long long fibonacci(int n)
{
  int i;
    long long dp[1000];
  dp[0]=0;
  dp[1]=1;

  for(i=2; i<=n; i++)
  {
    dp[i]=dp[i-1]+dp[i-2];
  }

    return dp[n];
}

int main()
{
    int testCase = 10;
    long long testAnswer = fibonacci(testCase);

    cout<<testAnswer;
}
